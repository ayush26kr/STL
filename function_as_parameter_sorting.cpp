//Passing function as a parameter
#include<iostream>
using namespace std;
bool compare(int a,int b)
{
    cout<<"comparing "<<a<<"and "<<b<<endl;
    return a>b;
}

//Bubble sort
void Bubble_sort(int a[],int n,bool (&cmp)(int a,int b)){  //<------here function is passed as a parameter to another function
    //N-1 large elemenets to the end                                <function return type> <&pointer> <parameters >
    for(int itr=1;itr<=n-1;itr++)
    {
        for(int j=0;j<=(n-itr-1);j++)
        {
            if(cmp(a[j],a[j+1]))
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main()
{
    int n,key;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Bubble_sort(a,n,compare);
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }

}