#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    for (size_t i = 0; i < n-1; i++)
    {
        int smaller = i;
        for (size_t j = i+1; j < n; j++)
        {
            if(arr[j] < arr[smaller])
            {
                smaller = j;
            }
        }
        swap(arr[smaller],arr[i]);
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
    int arr[] ={3,2,1,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    print_array(arr,n);
    return 0;
}