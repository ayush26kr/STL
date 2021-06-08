#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,pos,pos1,pos2;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cout<<"Enter elemnet "<<i+1<<" :";
        cin>>x;
        v.push_back(x);
    }

    cout<<"enter position to delete: ";
    cin>>pos;
    v.erase(v.begin()+pos-1);
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Enter range to delete : \n";
    cout<<"Starting range (included) - ";
    cin>>pos1;
    cout<<"Ending range (excluded) - ";
    cin>>pos2;
    
    v.erase(v.begin()+pos1-1,v.begin()+pos2);

    cout<<"\n final vector: ";
    for(auto x:v){
        cout<<x<<" ";
    }
    
    
    return 0;
}
