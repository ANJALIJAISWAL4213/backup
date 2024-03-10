//arrays and vectors need to be in sorted order to work in log n otherwise it will work in o(n)

//in lower bound the no is included but in upper bound even if 2 five is present it will give bigger value and both give pointer to next element
// if a 
//no bigger then the largest no is given

//both the func return location in arrays pointers and in vectors iterator

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    int min=*(min_element(v.begin(),v.end()));
    cout<<min<<endl;
    int max=*(max_element(v.begin(),v.end()));
    cout<<max<<endl;
}