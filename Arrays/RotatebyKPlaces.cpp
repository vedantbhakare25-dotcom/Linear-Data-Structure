#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9}; 
    int d=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    //my logic
    // for(int i=0;i<n;i++)
    // {
    //     arr[i]=arr[i+d];
    // }

    
    // int j=0;
    // for(int i=n-d;i<n;i++)
    // {
    //     arr[i]=temp[j];
    //     j++;
    // }

    // instead of using j we can try

    for(int i=n-d;i<n;i++)
    {
        arr[i]=temp[i-(n-d)];
    }   
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}