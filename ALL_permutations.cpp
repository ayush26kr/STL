//Print all possible permutations using next_permutation
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v{1,2,3};
    sort(v.begin(),v.end());
    cout<<"The 3! possible permutations with 3 elements "<<endl;
    do{
        cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<"\n";
    }while(next_permutation(v.begin(),v.end()));
}