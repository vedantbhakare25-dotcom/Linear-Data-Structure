#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter n =";
    cin>>n;
    int arr[n];
    cout<<" enter array values";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int hash[10]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }
    int q;
    cout<<"enter q="<<endl;
    cin>>q;
    int number;
    while(q)
    {
        cin>>number;
        cout<<number<<" appeared "<<hash[number]<<" times"<<endl;
        q--;
    }
}