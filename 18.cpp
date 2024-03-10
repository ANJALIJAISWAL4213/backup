#include <bits/stdc++.h>
using namespace std;
long long arr[(int)1e5];
// const int M=10^9+7;
// int main()
// { 
//     arr[0]=1;
//     for(int i=1;i<(int)1e5;i++)
//     {
//         arr[i]=(arr[i-1]*i)%M;
//     }
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         cout<<arr[n]<<endl;
//     }
// }

int main()
{
    int n;
    cin>>n;
    //long long arr[n] ;
       while(n--)
    {
        int x;
        cin>>x; 
        arr[x]++; 
    }
    }