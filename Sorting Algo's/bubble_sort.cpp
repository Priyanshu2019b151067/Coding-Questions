#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n)
{
    for (size_t i = 0; i < n-1; i++)
    {
        for (size_t j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    
}
void print_array(int arr[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}
int main()
{
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    print_array(arr,n);
    return 0;
}