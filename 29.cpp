// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     pair<int,int> p_array[3];
//     p_array[0]={1,2};
//     p_array[1]={2,3};
//     p_array[2]={3,4};
//     swap(p_array[0],p_array[2]);
//     for(int i=0;i<3;i++)
//     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
// }



// pair<int,string> p;
// p=make_pair(2,"abc");
// p={2,"abcd"};
//cin>>p.first;
//cout<<p.first;
// pair<int,string> &p1=p;
// p1.first=3;
//cout<<p.first<<" "<<p.second<<endl;



//vector<int> v;
//vector<pair<int,int>> v;



#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> v)
{
    cout<<"size"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        //v.size();//o(1)
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
         printVec(v);
        v.push_back(x);
    }
    printVec(v);
}