#include<bits/stdc++.h>
using  namespace std;

bool isSorted(vector<int> arr,int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> arr{1,2,2,4,5,6};
    int n=arr.size();
    int result=isSorted(arr,n);
    result==0?cout<<"false":cout<<"true";
    return 0;
}