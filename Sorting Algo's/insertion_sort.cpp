#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
    for (size_t i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i;
        while (arr[j-1] > key && j >0)
        {
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = key;
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
    int arr[] = {5,10,3,2,9,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    print_array(arr,n);
    return 0;
}