#include<bits/stdc++.h>
using namespace std;
int kadane_algorithm(int arr[], int n)
{
    int cur_sum = 0;
    int maxi = 0;
    for(int i = 0 ;i < n;i++)
    {
        cur_sum += arr[i];
        if(cur_sum < 0)
        {
            cur_sum = 0;
        }
        maxi = max(cur_sum,maxi);
    }
    return maxi;
}
int main()
{
    int arr[] = {-2,1,5,4,9,-3,3,4,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << kadane_algorithm(arr,n) << endl;
    return 0;
}