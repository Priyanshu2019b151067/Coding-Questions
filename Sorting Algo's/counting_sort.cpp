#include<bits/stdc++.h>
using namespace std;
void print_array(int arr[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}
void counting_sort(int arr[], int n)
{
    int maxi = arr[0];
    for(int i = 1;i<n;i++)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    int count[maxi+1] = {0};
    for(int i = 0;i <n;i++)
    {
        count[arr[i]]++;
    }
    int j = 0;
    for(int i = 0;i<=maxi;i++)
    {
        while (count[i]>0)
        {
            arr[j] = i;
            count[i]--;
            j++;
        }
        
    }
}
int main()
{
  int arr[] = {5,8,3,1,1,2,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  counting_sort(arr,n);
  print_array(arr,n);
    return 0;
}