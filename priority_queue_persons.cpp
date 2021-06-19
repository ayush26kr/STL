//priority queue of Persons and assign them in order of their age
#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
class Persons
{
    public:
    string name;
    int age;
Persons()
{

}
Persons(string n,int a)
{
    name=n;
    age=a;
}
};

class personcompare
{
    public:
    bool operator()(Persons A,Persons B)
    {
        return A.age<B.age;
    }
};
int main()
{
    int n;
    cout<<"enter number of Persons: ";
    cin>>n;
    priority_queue<Persons,vector<Persons>,personcompare>pq;  //pq is name of the priority queue
    for(int i=0;i<n;i++)
    {
        string name;
        int age;
        cin>>name>>age;
        Persons p(name,age);
        pq.push(p);
    }

    //top 3 oldest people in the queue
    int k=3;
    for(int i=0;i<k;i++)
    {
        Persons p=pq.top();
        cout<<p.name<<" "<<p.age<<endl;
        pq.pop();

    }
    return 0;

}