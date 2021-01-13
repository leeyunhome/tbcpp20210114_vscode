#include <iostream>
#include <typeinfo>

int main()
{
    using namespace std;

    int x;
    cout << typeid(&x).name() << endl;
    
    return 0;
}