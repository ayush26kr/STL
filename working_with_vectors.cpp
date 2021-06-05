//Working with Vectors
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a;  //declaration
    vector<int>b(5,10); //vector b with 5 integers all equals 10    {10,10,10,10,10 }
    vector<int>c(b.begin(),b.end());  //copying a vector b to c
    vector<int>d{1,2,3,4,5};

    for(auto c:b)
    {
        cout<<c<<" ";
    }

    d.push_back(5);
    d.push_back(7);
    for(auto c:b)
    {
        cout<<c<<" ";
    }
    cout<<endl<<endl;
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;
    cout<<d.max_size()<<endl;


}