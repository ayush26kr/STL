#include<iostream>
#include<map>
#include<cstring>
using  namespace std;
int main()
{

    multimap<char,string>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char ch;
        string s;
        cin>>ch>>s;
        m.insert(make_pair(ch,s));
    }
    auto it=m.begin();
    m.erase(it);

    for(auto c:m){
        cout<<c.first<<" -> "<<c.second<<endl;
    }

    string key;
    
    auto f=m.find('c');
    if(f->second=="cat")
    cout<<"inside the map ";
    else
    cout<<"Not in map";
}