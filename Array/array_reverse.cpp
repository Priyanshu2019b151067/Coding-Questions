#include<bits/stdc++.h>
using namespace std;
void array_reverse(int arr[], int n)
{
    int s = 0;
    int e = n-1;
    while(s < e)
    {
        swap(arr[s++],arr[e--]);
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
    int arr[] ={10,20,30,45,60,80,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    array_reverse(arr,n);
    print_array(arr,n);
    return 0;
}