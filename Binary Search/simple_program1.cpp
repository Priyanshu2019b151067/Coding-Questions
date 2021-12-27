#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int k)
{
    int s = 0;
    int e = n-1;
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(k < arr[mid])
        {
            e = mid -1;
        }
        else
        {
            s = mid +1;
        }
    }
    return -1;
}
int main()
{
    // always implemented on a sorted array
    int arr[] = {1,2,10,11,19,29,38};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    // enter the key you wanna search
    cin >> k;
    cout << binarySearch(arr,n,k) << endl;
    return 0;
}