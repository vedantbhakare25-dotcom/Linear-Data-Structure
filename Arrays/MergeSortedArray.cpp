#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[]={1,1,2,2,4,5,6};
    int arr2[]={1,2,3,4,5,6,7};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    vector<int> v;
    // int i=0;
    // int merge[n+m];
    // vector<int>s;
    // while(i<n)
    // {
    //     s.push_back(arr1[i]);
    //     i++;
    // }
    // i=0;
    // while(i<m)
    // {
    //     s.push_back(arr2[i]);
    //     i++;
    // }
    // sort(s.begin(),s.end());
    // for(auto i:s)
    // {
    //     cout<<i;
    // }

    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(arr1[i] <= arr2[j])
        {
            v.push_back(arr1[i]);
            i++;
        }
        else
        {
            v.push_back(arr2[j]);
            j++;
        }
    }

    while(i<n)
    {
        v.push_back(arr1[i]);
        i++;
    }

    while(j<m)
    {
        v.push_back(arr2[j]);
        j++;
    }
    for(auto i:v)
    {
        cout<<i;
    }
}