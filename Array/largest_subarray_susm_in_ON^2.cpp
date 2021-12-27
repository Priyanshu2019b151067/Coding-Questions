#include<bits/stdc++.h>
using namespace std;
int subarray_sum_using_prefix(int arr[], int n)
{
    int ps[n];
    int maxi = 0;
    ps[0] =arr[0];
    for (size_t i = 1; i < n; i++)
    {
        ps[i] = ps[i-1] + arr[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        int sum = 0;
        for (size_t j = i; j < n; j++)
        {
            sum = i>0?ps[j] -ps[i-1]:ps[j];
        }
        maxi = max(maxi,sum);
    }
    return maxi;
}
int main()
{
    int arr[] = {-2,1,5,4,9,-3,3,4,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << subarray_sum_using_prefix(arr,n) << endl;
    return 0;
}