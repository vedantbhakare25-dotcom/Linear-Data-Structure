#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,1,1,0,1,1,1,1,0,0,1,1,1,1,1,1};
    int cnt=0;int maxi=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                cnt++;
                if(cnt>maxi)
                {
                    maxi=cnt;
                }
            }
            else cnt=0;
        }
        maxi>cnt ? cout<<maxi: cout<<cnt;
}