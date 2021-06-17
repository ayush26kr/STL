//Priority Queue
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int n;
  //  priority_queue<int>Queue;   // for Descending order (default)
     priority_queue<int,vector<int>,greater<int>>Queue;  //for Ascending order
    cout<<"Enter number of elements to enter : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        Queue.push(num);
    }
    cout<<" Priority queue output: ";
    while(!Queue.empty())
    {
        cout<<Queue.top()<<" ";
        Queue.pop();
    }

}