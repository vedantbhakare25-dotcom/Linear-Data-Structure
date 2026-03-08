#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,1,3,4,2,5,1,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=i;
    int k=11;
    int sum=0;
    int len=0;
    int maxlen=0;
    while(j<n)
    {
        sum+=arr[j];
        while(sum>k)
        {
            sum-=arr[i];
            i++;
        }
        if(sum==k)
        {
            len=j-i+1;
            maxlen=max(maxlen,len);
        }  

    j++; 
    }
    cout<<maxlen;
}