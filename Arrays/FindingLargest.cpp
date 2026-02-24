#include<bits/stdc++.h>
using namespace std;
//To find largest from array has two solutions
//1. Sort the array and return the last element
//2. given below
/*int main()
{
    // int arr[3,1,6,7,1,0,9,1];
    int arr[]={4,2,7,8,2,5,8,5,3};
    int largest=arr[0];
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i=1;i<length;i++)
    {
        if(largest<arr[i])
        {
            largest=arr[i];
        }
    }
    cout<<"largest= "<<largest;
    return 0;
}*/
//using vector
int main()
{
    vector<int> arr={4,2,7,8,2,1111,8,5,3};
    int largest=arr[0];
    int length = arr.size();
    for(int i=1;i<length;i++)
    {
        if(largest<arr[i])
        {
            largest=arr[i];
        }
    }
    cout<<"largest= "<<largest;
    return 0;
}