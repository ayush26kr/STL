//Indian Money Change
#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
    return a<=b;
}
int main()
{
    int money;
    int a[]={1,2,5,10,20,50,100,200,500,2000};
    cout<<"Enter money: ";
    cin>>money;
    while(money!=0){
        auto lb=lower_bound(a,a+10,money,compare)-a-1;
        int m=a[lb];
        cout<<m<<"  ";
        money-=m;

    }
}