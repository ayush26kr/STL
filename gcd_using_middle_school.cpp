//GCD USING MIDDLE SCHOOL PROCEDURE
#include<iostream>
using namespace std;
int main()
{
	int m,n,i,j;
	int arr[m];
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(((m%i)==0)&&((n%i)==0))
			{
				cin>>arr[m];
			}
		}
	}
	//max value of arr of common divisiors
	int max=arr[0],temp;
	for(i=1;i<m;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	cout<<"GCD is : "<<max;
}