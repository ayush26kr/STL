//Stacl STL
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int>s;
    for(int i=0;i<5;i++)  //Enter 5 elements to stack
    {
        s.push(i);
    }
    while(!s.empty()){
        cout<<s.top()<<" ,";
        s.pop();            //to delete elements pop
    }
}