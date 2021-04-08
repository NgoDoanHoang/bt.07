#include <iostream>

using namespace std;

int countEven( int *x, int y)
{
    for (int i=0;i<10;i++)
    {
        cin >> *(x+i);
    }
    for (int i=0;i<5;i++)               // 5 so dau tien cua mang // 5 so sau tuong tu
    {
        if (*(x+i)%2==0)
        {
            cout << i+1 << " ";
        }
    }
}

int main()
{
    int a[10];
    countEven(a,10);
}
