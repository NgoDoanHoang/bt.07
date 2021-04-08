#include <iostream>

using namespace std;

int binarySearch(int *arr, int l, int r, int x) {
  if (r >= l)
{
    int mid = (r + l) / 2;

    if (arr[mid] == x) return mid;

    if (arr[mid] > x)
      return binarySearch(arr, l, mid - 1, x); // trai

    return binarySearch(arr, mid + 1, r, x); //phai
}

  return -1;
}

int main()
{
  int arr[10];
  for (int i=0;i<10;i++)
  {
      cin >> arr[i];
  }
  int n = sizeof(arr) / sizeof(arr[0]);
  int x;
  cin >> x;
  int res = binarySearch(arr, 0, n - 1, x);
  if (res == -1)
    cout << x <<  " xuat hien tai "<<res+1;
  else
    cout << x << " xuat hien tai "<<res+1 ;
  return 0;
}
