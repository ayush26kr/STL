#include<iostream>
#include<set>
using namespace std;
int find_kth_element(int arr[],int n,int k)
{
    //since the elements are unique (in question given)
    //I will use set
    set<int>s(arr,arr+n);
    set<int>::iterator itr=s.begin();
    advance(itr,k-1);
    return *itr;

}
int main()
{
    int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    cout<<find_kth_element(arr,n,k);
}