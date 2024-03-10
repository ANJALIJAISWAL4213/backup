#include <bits/stdc++.h>
using namespace std;
long long sum[10^5];
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int x=n;
    cin>>arr[0];
    sum[0]=arr[0];
    for(int i=1;i<n;i--)
    {
        cin>>arr[i];
        sum[i]=sum[i-1]+arr[i];
    }
}