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
//Template+iterator+comparators
template<class Forwarditerator ,class T,class Compare>
Forwarditerator search(Forwarditerator start,Forwarditerator end,T key,Compare cmp)
{
    while(start!=end)
    {
        if(cmp(*start,key)){
            return start;
        }
        start++;
    }
    return end;
}

class Book{
    public:
    string name;
    int price;

    Book(string name,int price){
        this->name=name;
        this->price=price;
    }

}; 
int main()
{
    Book b1("C++",100);
    Book b2("Python",110);
    Book b3("Java",120);

    list<Book>l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);

    Book booktofind("C++",110);

    

    /*if(b1==booktofind)
    {                                               //it will not work
        cout<<"true";
    }*/

    class BookCompare{
         public:
         bool operator()(Book A,Book B){
             if(A.name==B.name){
                 return true;
             }
             return false;
        }
    };

    BookCompare cmp;
    auto it = search(l.begin(),l.end(),booktofind,cmp);
    if(it!=l.end())
    {
        cout<<"Book found in the library ";
    }
    else
    cout<<"Book not FOUND !";




}