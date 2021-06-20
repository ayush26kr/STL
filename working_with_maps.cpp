#include<iostream>
#include<map>
using namespace std;
map<string,int>m;
int main()
{
    m.insert(make_pair("Mango",100)); //insertion
    
    pair<string,int>p;  //insertion
    p.first="Apple";
    p.second=120;
    m.insert(p);

    m["Banana"]=20;

    //search
    string fruit;
    cin>>fruit;

    auto it=m.find(fruit);
    if(it!=m.end()){
        cout<<"price of "<<fruit<<"is "<<m[fruit]<<endl;
    }
    else
    cout<<"fruit is not present ";

    //another way to find a particular map
    //it stores uniquekeys only once

    if(m.count(fruit))
    cout<<"price is "<<m[fruit]<<endl;
    else
    cout<<"could not find ";

    //update the price
    m[fruit]+=22;

    m["Litchi"]=80;
    m["Pineapple"]=65;

    //iterate over all the key value pairs
    for(auto it=m.begin();it!=m.end();it++)
    cout<<it->first<<"and "<<it->second<<endl;

    
    //erase
    //m.erase(fruit);
}