#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<pair<int,int>>s;
    s.insert(make_pair(10,1));
    s.insert(make_pair(20,1));
    s.insert(make_pair(5,4));
    s.insert(make_pair(5,9));
    s.insert(make_pair(10,2));
    s.insert(make_pair(5,4));

    for(auto x:s)
    cout<<x.first<<" "<<x.second<<endl;

    cout<<"Lower bound: ";
    auto it=s.lower_bound(make_pair(5,5));
    cout<<it->first<<" "<<it->second;
}