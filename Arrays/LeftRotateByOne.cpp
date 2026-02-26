#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6};
    int temp=arr[0];
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"array before rotation"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    cout<<"\narray after rotation"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}