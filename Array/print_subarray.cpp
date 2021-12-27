#include<bits/stdc++.h>
using namespace std;
void print_subarray(int arr[], int n)
{
    for(int i = 0;i< n ;i++)
    {
        for(int j = i;j<n;j++)
        {

            for(int k = i;k <= j ;k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    print_subarray(arr,n);
    return 0;
}