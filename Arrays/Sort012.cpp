#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={0,2,1,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int cn0=0,cn1=0,cn2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            cn0++;
        else if(arr[i]==1)
            cn1++;
        else
            cn2++;
    }
    for(int i=0;i<n;i++)
    {
        if(i<=cn0-1)
            arr[i]=0;
        else if(i>cn0-1 && i<=cn0+cn1-1)
            arr[i]=1;
        else
            arr[i]=2;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}