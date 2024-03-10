#include<bits/stdc++.h>
using namespace std;
int main()
{
    //x^x=0
    //x^0=x;
    //x^y^z=y^x^z=x^z^y
    // xor is associative
    int a=4,b=6;
    a=a^b;
    b=b^a;//b=b^(a^b)==b^b^a=0^a
    a=a^b;//a=(a^b)^a=b^a^a=b^0=b
}