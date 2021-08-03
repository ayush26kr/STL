#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    set<int>s;
    while(n--)
    {
        int x;
        cin>>x;
        int num;
        cin>>num;
        switch(x)
        {
            
            case 1:s.insert(num);
            break;
            case 2:s.erase(num);
            break;
            case 3:
            set<int>::iterator itr=s.find(num);
            if(itr==s.end())
            cout<<"No"<<endl;
            else {
            cout<<"Yes"<<endl;
            }
        }
    } 
    return 0;
}



