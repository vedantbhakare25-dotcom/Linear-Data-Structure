#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     string s;
//     cout<<"enter string =";
//     cin>>s;
//     int n = s.length();
//     int hash[26]={0};
//     for(int i=0;i<n;i++)
//     {
//         hash[s[i]-'a']++;
//     }
//     int q;
//     cout<<"enter how many charaters you wanna search = "<<endl;
//     cin>>q;
//     char c;
//     while(q)
//     {
//         cout<<"enter char to be searched ="<<endl;
//         cin>>c;
//         cout<<c<<" appeared "<<hash[c-'a']<<" times"<<endl;
//         q--;
//     }
// }

//if we do from all charcaters:

int main()
{
    string s;
    cout<<"enter string =";
    cin>>s;
    int n = s.length();
    int hash[256]={0};
    for(int i=0;i<n;i++)
    {
        hash[s[i]]++;
    }
    int q;
    cout<<"enter how many charaters you wanna search = "<<endl;
    cin>>q;
    char c;
    while(q)
    {
        cout<<"enter char to be searched ="<<endl;
        cin>>c;
        cout<<c<<" appeared "<<hash[c]<<" times"<<endl;
        q--;
    }
}