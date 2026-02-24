#include<bits/stdc++.h>
using namespace std;

/*int main()
// {
//     int arr[]={2,3,4,5,1,9};
//     int slarge=0,large;
//     int size=sizeof(arr)/sizeof(arr[0]);
//     large=arr[0];
//     for(int i=1;i<size;i++)
//     {
//         if(large<arr[i])
//         {
//             slarge=large;
//             large=arr[i];
//         }
//         else if(arr[i] > slarge && arr[i] != large)
//         {
//             slarge = arr[i];
//         }
//     }
//     cout<<slarge;
// }*/
//better solution
/*int main()
{
    int arr[]={5,2,4,8,5,2,6,8,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int largest=arr[0];
    int second=-1;
    for(int i=1;i<size;i++)
    {
        if(largest<arr[i])
        {
            largest=arr[i];
        }
    }
    cout<<"first largest = "<<largest;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>second && arr[i]<largest)
        {
            second=arr[i];
        }
    }
    cout<<"second largest = "<<second;
    return 0;
}*/
//optimal solution
int main()
{
     int arr[]={2,3,4,6,1,8,9};
    int slarge=-1,large;
    int size=sizeof(arr)/sizeof(arr[0]);
    large=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]>slarge && arr[i]>large)
        {
            slarge=large;
            large=arr[i];
        }
        else if(arr[i]>>slarge && arr[i]<large)
        {
            slarge=arr[i];
        }
    }
    cout<<slarge;

}