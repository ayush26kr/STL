#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int key;
    int arr[]={52,89,74,63,14,37};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Enter element to be searched: ";
    cin>>key;
    bool present=binary_search(arr,arr+size,key);
    if(present)
    {
        cout<<"present";
    }
    else{
        cout<<"not present ";
    }
    
    /*if(present)                                         //if element is present in the array
    {
        cout<<"element is present "<<endl;
        auto it=find(arr,arr+size,key);
        cout<<"location: "<<(it-arr)<<endl;           //index of element it is present
        
        auto lb=lower_bound(arr,arr+size,key);       //lower_bound gives  first val>=key
        cout<<"lower bound of "<<key<<" :"<<lb-arr<<endl;

        auto ub=upper_bound(arr,arr+size,key);       //upper_bound gives first val>key
        cout<<"upper_bound of "<<key<<" :"<<ub-arr<<endl;

        cout<<"frequency of element is: "<<ub-lb;


    }
    else
    cout<<"Element not present! ";*/
}