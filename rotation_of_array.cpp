//Rotation of array using rotate()
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    rotate(arr,arr+2,arr+size);
    cout<<"Arrayafter rotation is : ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    

}