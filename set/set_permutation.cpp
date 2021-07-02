#include<iostream>
using namespace std;

void permute(char a[],int i)
{
    if(a[i]=='\0')
    {
        cout<<a<<endl;
        return;
    }
//recursive case
    for(int j=i;a[j]!='\0';j++)
    {
        swap(a[i],a[j]);
        permute(a,i+1);
        swap(a[i],a[j]);
    }
}
int main()
{
    char a[100];
    cout<<"enter a string: ";
    cin>>a;
    cout<<"Permutations are - ";

    permute(a,0);
}