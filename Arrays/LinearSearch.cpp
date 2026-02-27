#include<bits/stdc++.h>
using  namespace std;

int search(int arr[], int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"enter key to be searched";
    cin>>key;
    cout<<search(arr,key,n);
    return 0;
}