//String Tokenizer strtok function
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100]="Today is a beautiful day ";
    char *ptr=strtok(s," ");
    cout<<ptr<<endl;
    while(ptr!=NULL){
    ptr=strtok(NULL," ");
    cout<<ptr<<endl;
    }
}