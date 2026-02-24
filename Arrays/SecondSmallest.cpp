#include<bits/stdc++.h>
using namespace std;

int main()
{
   int arr[]={5,3,4,6,8,5,3,4,6};
   int size=sizeof(arr)/sizeof(arr[0]); 
   int ssmallest=INT_MAX;
   int smallest=arr[0];
   for(int i=1;i<size;i++)
   {
    if(arr[i]<smallest)
    {
        ssmallest=smallest;
        smallest=arr[i];
    }
    else if(arr[i]!=smallest && arr[i]<ssmallest)
    {
        ssmallest=arr[i];
    }
   }
   cout<<smallest<<endl;
   cout<<ssmallest;
}