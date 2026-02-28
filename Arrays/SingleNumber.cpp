#include<bits/stdc++.h>
using namespace std;

//brute force
// int main()
// {
//     int arr[]={1,2,1,4,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int cnt=0;int single=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(i==j)
//             {
//                 continue;
//             }
//             if(arr[i]==arr[j])
//             {
//                 cnt++;
//             }
//         }
//         if(cnt==0)
//         {
//             single=arr[i];
//         }
//         cnt=0;
//     }
//     cout<<single;
// }

// optimal approach
int main()
{
    int arr[]={1,2,1,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int single=0;
    for(int i=0;i<n;i++)
    {
        single^=arr[i];
    }
    cout<<single;
}