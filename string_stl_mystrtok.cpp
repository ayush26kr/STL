//String Tokenizer mystrtok function
#include<iostream>
#include<cstring>
using namespace std;
char *mystrtok(char *s,char delim){
    //string and single char acts as deliminiter
    static char*input=NULL;
    if(s!=NULL)
    {
        input=s;
    }
    if(input==NULL)
    {
        return NULL;
    }

    char *output=new char[strlen(input)+1];
    int i=0;
    for(;input[i]!='\0';i++)
    {
        if(input[i]!=delim)
        {
            output[i]=input[i];
        }
        else
        {
            output[i]='\0';
            input=input+i+1;
            return output;
        }
        output[i]='\0';
        input=NULL;
        return output;
    }
}
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