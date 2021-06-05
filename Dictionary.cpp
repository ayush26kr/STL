#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[5][100],temp[100];
	cout<<"Enter 5 strings : ";
	for(int i=0;i<5;i++)
	{
		fgets(str[i],sizeof(str[i]),stdin);
		
	}
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	//print
	cout<<endl<<"Lexographical order"<<endl<<endl;
	for(int i=0;i<5;i++)
	{
		fputs(str[i],stdout);
	}
}

