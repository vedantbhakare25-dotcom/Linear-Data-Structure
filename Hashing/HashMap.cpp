#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter size of array = ";
    cin>>n;
    map<int,int> mpp;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    //auto iterator in the map

    for(auto i: mpp)
    {
        cout<<i.first<<"->"<<i.second<<endl;
    }
    int q;
    cout<<"how many values you wanna search =";
    cin>>q;

    while(q)
    {
        int num;
        cin>>num;
        cout<<mpp[num];
        q--;
    }
}