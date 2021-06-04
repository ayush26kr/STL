#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
 bool compare(string a,string b)
    {
        return a>b;
    }
    int main()
{
    int n;
    cout<<"enter value: ";
    cin>>n;
    cin.get();
    string s[100];   //vector
    for(int i=0;i<n;i++)
    {
        getline(cin,s[i]);
    }
   
    sort(s,s+n,compare);
    cout<<endl<<endl<<"sorted order: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
}