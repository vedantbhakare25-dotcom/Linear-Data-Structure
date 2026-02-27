#include<bits/stdc++.h>
using namespace std;

/*int main()
{
    int arr[]={1,2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=arr[0];
    int y=arr[n-1];
    int temp[n+1];
    for(int i=0;i<=y;i++)
    {
        temp[i]=i+1;
    }
    int i=0;int j=0;
    while(i<n && j<n+1)
    {
        if(arr[i]==temp[j])
        {
            i++;
            j++;
        }
        else
        {
            cout<<temp[j]<< " was missing";
            break;
        }
    }
}*/

int main()
{
 int arr[] = {1,2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int total = (n+1)*(n+2)/2;  
    int actual = 0;

    for(int i = 0; i < n; i++)
        actual += arr[i];

    cout << (total - actual) << " was missing";
}