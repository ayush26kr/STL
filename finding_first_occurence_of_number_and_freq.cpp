//finding first occurence of the number and its frequency
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={7,9,6,1,3,4,6,2,8,6};
    int key=6;
    sort(vec.begin(),vec.end());
    for(int x:vec)
    cout<<x<<" ";
    vector<int>::iterator lb,ub;
    lb=lower_bound(vec.begin(),vec.end(),key);
    ub=upper_bound(vec.begin(),vec.end(),key);
    int index=(lb-vec.begin());

    cout<<"First occurence of "<<key<<" is at pos: "<<index;
    cout<<"Frequency of "<<key<<"is "<<ub-lb;

}