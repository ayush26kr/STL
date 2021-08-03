#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
      
    map<string,int>mp;
    map<string,int>::iterator itr;
    int n;
    cin>>n;
    string name;
    int marks;
    while(n--)
    {
        int ch; //can be 1,2,3
        cin>>ch;
        
        if(ch==1)
        {
            
            cin>>name;
            cin>>marks;
            itr = mp.find(name);
            if(itr==mp.end())
            mp.insert(pair<string,int>(name,marks));
            else   //(itr != mp.end())
            itr->second+=marks;
        
            
            
        }
        if(ch==2)
        {
            cin>>name;
            mp.erase(name);
           
        }
        if(ch==3)
        {
            cin>>name;
            itr=mp.find(name);
            if(itr==mp.end())
            cout<<"0"<<endl;
            else {
            cout<<itr->second<<endl;
            }
        }
            
           
            
    }
}





