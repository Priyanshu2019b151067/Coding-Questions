#include<bits/stdc++.h>
using namespace std;
int largest_sum(int arr[], int n)
{
    int maxi = 0;
     for(int i = 0;i< n ;i++)
    {
        for(int j = i;j<n;j++)
        {
            int sum = 0;
            for(int k = i;k <= j ;k++)
            {
                sum += arr[k];
            }
            maxi = max(sum,maxi);
        }
    }
    return maxi;
}
int main()
{
    
    int arr[] = {-2,1,5,4,9,-3,3,4,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << largest_sum(arr,n) <<endl;
    return 0;
}