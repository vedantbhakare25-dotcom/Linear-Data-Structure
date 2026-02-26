#include<bits/stdc++.h>
using namespace std;

//my brute force approach
/*int main()
{
    int arr[]={1,0,3,6,9,4,0,0,1,5,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> temp;
    int zero=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp.push_back(arr[i]);
        }
        else zero++;
    }
    for(int i=0;i<n-zero;i++)
    {
        arr[i]=temp[i];
    }
    for(int i=n-zero;i<n-1;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}*/

//Striver's brute force

/*int main()
{
    int arr[]={0,1,3,0,0,5,0,7,6,0,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> temp;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp.push_back(arr[i]);
            c++;
        }
    }
    for(int i=0;i<c;i++)
    {
        cout<<temp[i];
    }
    for(int i=0;i<c;i++)
    {
        arr[i]=temp[i];
    }
    for(int i=c;i<n;i++)
    {
        arr[i]=0;
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}*/

int main()
{
    int arr[]={1,0,2,4,0,0,4,0,5,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
