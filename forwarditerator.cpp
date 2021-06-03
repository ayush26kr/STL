#include<iostream>
#include<list>
using namespace std;

//Template
template<typename T>
int search(T arr[],int size,T key)
{
    for(int pos=0;pos<size;pos++)
    {
        if(arr[pos]==key)
        return pos;
    }
    return size;
}
//Template+iterator
template<class Forwarditerator ,class T>
Forwarditerator search(Forwarditerator start,Forwarditerator end,T key)
{
    while(start!=end)
    {
        if(*start==key){
            return start;
        }
        start++;
    }
    return end;
}
int main()
{
    list<int>l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);

    auto it=search(l.begin(),l.end(),4);
    if(it==l.end())
    {
        cout<<"Element not in the list ";
    }
    else
    cout<<"location is : "<<*it<<endl;



}