#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     vector<int> a{1,2,3,4,5,6,7,8,9};
//     long long n = a.size();
//     long long k = 15;
//     map<long long, int> mpp;
//     long long sum=0;    
//     int maxlen=0;
//     for(int i=0;i<n;i++)
//     {
//         sum+=a[i];
//         if(sum==k)
//         {
//             maxlen = max(maxlen, i+1);
//         }
//        long long rem=sum-k;
//        if(mpp.find(rem)!=mpp.end())
//        {
//            int len = i - mpp[rem];
//            maxlen = max(maxlen, len);
//        }
//        if(mpp.find(sum)==mpp.end())
//        {
//            mpp[sum] = i;
//        }
//     }
//     cout << maxlen << endl;
//     return 0;
// }




int main()
{
    int arr[]={1,2,1,3,4,2,5,1,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=i;
    int k=11;
    int sum=0;
    int len=0;
    int maxlen=0;
    while(j<n)
    {
        sum+=arr[j];
        while(sum>k)
        {
            sum-=arr[i];
            i++;
        }
        if(sum==k)
        {
            len=j-i+1;
            maxlen=max(maxlen,len);
        }  

    j++; 
    }
    cout<<maxlen;
}