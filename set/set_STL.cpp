#include<iostream>
#include<set>
using namespace std;
int main()
{
    int arr[]={2,1,2,3,6,5,4,12,3,6,5,10,12};
    int n=sizeof(arr)/sizeof(int);
    set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    cout<<"Unique elements are : ";
    for(int x:s)
    cout<<x<<" ";
}