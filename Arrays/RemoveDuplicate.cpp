#include<bits/stdc++.h>
using namespace std;    
// brute force:
/*int main()
{
    int arr[]={1,2,3,5,5,6,7,1,1,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    set<int> st;
    for(int i=0;i<size;i++)
    {
        st.insert(arr[i]);
    }
    int index=0;
    for(auto it:st)
    {
        arr[index]=it;
        index++;
    }
    for(int i=0;i<st.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}*/
//optimal
int main()
{
    int i=0;
    int arr[]={1,2,2,3,5,5,6,7,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int j=1;j<size;j++)
    {
        if(arr[j]!=arr[i])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    for(int j=0;j<i+1;j++)
    {
        cout<<arr[j];
    }
    return 0;
}
