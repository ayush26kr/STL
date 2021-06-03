//Linear search (Generic Function)
#include<iostream>
using namespace std;

//Template
template<typename T>
T search(T arr[],int n,T key){
    for(int pos=0;pos<n;pos++)
    {
        if(arr[pos]==key)
        return pos;
    }
    return n;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int key=4;
    cout<<search(arr,n,key)<<endl;

    char arr2[]={'a','b','c','d','e','f','g','h'};           // I have doubt in this output should be 5 
    char ky='f';
    cout<<search(arr2,8,ky)<<endl;

    float b[]={1.1,1.2,1.3,1.4};
    float k=1.2;
    cout<<search(b,4,k)<<endl;
}