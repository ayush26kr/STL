//Pair in STL
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    pair<int,char>p;  //pairing int and char
    p.first=1;
    p.second='A';
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,string> d=make_pair(100,"Audi");
    cout<<d.first<<" "<<d.second<<endl;

    pair<pair<int,int>,string>a;
    a.first.first=20;
    a.first.second=10;
    a.second="name";
    cout<<a.first.first<<" "<<a.first.second<<" "<<a.second<<endl;

}