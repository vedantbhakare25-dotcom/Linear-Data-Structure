#include<bits/stdc++.h>
using namespace std;    

int main()
{
    int arr[]={1,2,3,1,4,5,1,2,3,1};
    int key=10;
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    int len=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=arr[k];
            }
            if(sum==key) len=max(len,j-i+1);
        }
    }
    cout<<"length of maximum subarray"<<len;
    return 0;
}