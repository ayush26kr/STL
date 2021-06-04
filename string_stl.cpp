//Working with string in STL
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1("Hello");  //Initialization
    string s2="World!";  //Initialization
    string s3(s2);   //copying string s2 to s3
    string s4=s2;    //copying string s2 to s4

    char a[]={'a','b','c','\0'};  //Initiakization by array
    string s5(a);

    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    string s0;
    //empty()
    if(s0.empty()){
        cout<<"String is empty\n";
    }

    //append
    s0.append("I am a coder ");
    cout<<s0;
    cout<<endl;

    s0+="coder coder ";
    cout<<s0;

    cout<<endl;

    //remove
    cout<<s0.length()<<endl;  //total characters+spaces+(null)
    s0.clear();
    cout<<s0.length();

    //compare strings
    string s6="Apple";
    string s7="Mango";
    cout<<endl;

    cout<<s6.compare(s7)<<endl;  //returns integer==0, <0 , >0

    //Find Substring
    string s="I want to have apple juice ";
    int index=s.find("apple");  //to find the index of apple in s
    cout<<"Index of apple is: "<<index<<endl;

    //To remove a word (apple) from a string

    string word="apple";        //store the word to remove in some variable
    int len=word.length();      //find the number of characters to be removed
    s.erase(index,len);           //index stores the index of apple
    cout<<s;

    cout<<endl;

    //iterate over all the characters of the string            //s6=Mango

    for(int i=0;i<s6.size();i++)
    {
        cout<<s6[i]<<":";
    }
    cout<<endl;

    for(auto it=s6.begin();it!=s6.end();it++)
    {
        cout<<(*it)<<",";
    }
    cout<<endl;

    for(auto c:s6){
        cout<<c<<" ";
    }
}