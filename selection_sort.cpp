#include <iostream>

using namespace std;

void print_array(int arr[], const int length);
void selection_sort(int arr[], const int length);

int main()
{
    int arr[] = {3, 5, 2, 1, 4};

    print_array(arr, 5);
    selection_sort(arr, 5);
    // print_array(arr, 5);

    return 0;
}

void print_array(int arr[], const int length)
{
    for (int ix = 0; ix < length; ++ix)
    {
        cout << arr[ix] << " ";
    }
    cout << endl;
}

void selection_sort(int arr[], const int length)
{
    for (int startIdx = 0; startIdx < length -1; ++startIdx)
    {
        int minIdx = startIdx;
        for (int currentIdx = startIdx + 1; currentIdx < length; ++currentIdx)
        {
            if (arr[minIdx] > arr[currentIdx])
            {
                minIdx = currentIdx;
            }
        }
        std::swap(arr[minIdx], arr[startIdx]);
        // int temp = arr[minIdx];
        // arr[startIdx] = arr[minIdx];
        // arr[minIdx] = temp;

        print_array(arr, 5);
    }
}