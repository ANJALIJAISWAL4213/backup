#include <bits/stdc++.h>
using namespace std;
void print(vector <int> v)
{
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}
int main()
{
    // pair <int,int> p;
    // // p=make_pair(1,2);
    // p={1,2};
    // pair <int,int> p2=p;
    // p2.first=3;
    // cout<<p.first<<" "<<p.second<<endl;
    // pair <int,int> &p3=p;
    // p3.first=3;
    // cout<<p.first<<" "<<p.second<<endl;

    // pair <int,int> pp[3];
    // pp[0]={1,2};
    // pp[1]={3,4};
    // pp[2]={5,6};
    // for(int i=0;i<3;i++)
    // cout<<pp[i].first<<" "<<pp[i].second<<endl;

    vector<int> v;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    print(v);
}