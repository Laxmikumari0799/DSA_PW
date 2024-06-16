#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maxinarr2(int arr[], int n, int idx)

{
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxinarr2(arr, n, idx+1));
  
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    // maxinarr(arr, n, 0, INT_MIN);
    maxinarr2(arr, n, 0);
cout<<maxinarr2(arr, n, 0);
}