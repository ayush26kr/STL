//Next Permutation
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    cout<<"Vector: ";
    for(int x:v)
    cout<<x<<" ";
    cout<<endl;

    rotate(v.begin(),v.begin()+3,v.end());

    cout<<"After rotation to 3 places : ";
    for(int x:v)
    cout<<x<<" ";
    cout<<endl;

    next_permutation(v.begin(),v.end());    //next permutation

       for(int x:v)
    cout<<x<<" ";


}