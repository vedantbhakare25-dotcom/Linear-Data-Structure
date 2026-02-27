#include<bits/stdc++.h>
using namespace std;

//brute force approach
/*int main()
{
    int arr1[]={1,2,2,3,4,5,5};
    int arr2[]={1,2,3,3,4,5,5,6};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    set<int> temp;
    for(int i=0;i<n1;i++)
    {
        temp.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++)
    {
        temp.insert(arr2[i]);
    }

    for(int x:temp)
    {
        cout<<x<<" ";
    }
}*/

//optimal


int main()
{
    int arr1[]={1,2,2,3,4,5,5};
    int arr2[]={1,2,3,3,4,5,5,6};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);    
    int i=0,j=0;
    vector<int> unionArr;
    while(i<n1&&j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            if(unionArr.size()==0 || unionArr.back()!=arr1[i])
            {
               unionArr.push_back(arr1[i]); 
            }
            i++;
        }
        else
        {
            if(unionArr.size()==0 || unionArr.back()!=arr2[j])
            {
               unionArr.push_back(arr2[j]); 
            }  
            j++;
        }
    }
    while(j<n2)
    {
        if(unionArr.size()==0 || unionArr.back()!=arr2[j])
        {
            unionArr.push_back(arr2[j]); 
        }  
        j++;
    }
    while(i<n1)
    {
        if(unionArr.size()==0 || unionArr.back()!=arr1[i])
        {
            unionArr.push_back(arr1[i]); 
        }
        i++;
    }
    for(int i=0;i<unionArr.size();i++)
    {
        cout<<unionArr[i]<<" ";
    }
}
