#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    int n1;
    int n2;

    int a=0;
    int b=0;

    while(a<=100 && b<=100)
    {
        n1=rand()%(6-1+1)+1;
        a=a+n1;
        cout << "diem hien tai " << a << endl;
        n2=rand()%(6-1+1)+1;
        b=b+n2;
        cout << "diem hien tai " << b << endl;
        if ( a>=100 && b <100)
        {
            cout << " a win. neu ko thay dong nay thi tu hieu la b win ";break;
        }
    }


}
