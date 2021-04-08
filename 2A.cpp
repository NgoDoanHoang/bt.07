#include <iostream>

using namespace std;

int b[10];

int func( int x[])
{
    cout << sizeof(x);
}

int main()
{
    int a[100];
    cout << sizeof(a) <<" " << sizeof(b);
    cout << endl << func(a);
    cout << endl << func(b);
    int* z;
    cout << endl << func(z);
}
