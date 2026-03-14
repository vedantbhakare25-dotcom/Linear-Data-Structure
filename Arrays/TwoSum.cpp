#include<bits/stdc++.h>
using namespace std;
//brute force approach
int main()
{
    int arr[]={1,2,4,1,5};
    int target=7;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<i<<","<<j;
                break;
            }
        }
    }
}

//better approach using hashing 
int main()
{
    int arr[]={1,2,1,4,1,5};
    map<int,int> mpp;
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=7;
    for(int i=0;i<n;i++)
    {
        int more=target-arr[i];
        if(mpp.find(more)!=mpp.end())
        {
            cout<<mpp[more]<<","<<i;
            break;
        }
        mpp[arr[i]]=i;
    }
}
