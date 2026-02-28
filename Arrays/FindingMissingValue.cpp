#include<bits/stdc++.h>
using namespace std;

// my brute force approach
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

//striver's brute force

/*int main()
{
    int arr[]={1,2,3,5};
    int n=5;
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        int flag=0;
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]==i)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"missing no. is="<<i;
        }
    }
}*/

//summation optimized approach

/*int main()
{
    int arr[]={1,2,3,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int n=5;
    int sum=(n*(n+1)/2);
    int sum2=0;
    for(int i=0;i<size;i++)
    {
        sum2+=arr[i];
    }
    int missing=sum-sum2;
    cout<<"missing number is ="<<missing;
}*/

//XOR optimized approach

int main()
{
    int arr[]={1,2,4,5};
    int n=5;
    int size=sizeof(arr)/sizeof(arr[0]);
    int xor1=0;int xor2=0;
    for(int i =0;i<n-1;i++)
    {
        xor2=xor2^arr[i];
        xor1=xor1^(i+1);
    }
    xor1^=n;
    int missing=xor1^xor2;
    cout<<"missing is = "<<missing;
}


