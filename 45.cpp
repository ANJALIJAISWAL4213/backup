#include<bits/stdc++.h>
using namespace std;
int main()
{
   // [](int x){return x+2;};//lambda func.
//    cout<< [](int x){return x+2;}(2);
auto y= [](int x){return x+2;}(2);
cout<<y;
}