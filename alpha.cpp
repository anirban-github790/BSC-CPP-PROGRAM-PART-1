#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int a[30],n;
	char b[8][4]={{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
	cout<<"Enter how many numbers entered:";
	cin>>n;
	cout<<"Enter yours numbers except 1 and 0:"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"The numbers are:"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0||a[i]==1)
		{
			cout<<"The 1 or 0 is not allowed\n";
			exit(0);
		}
	}
	return 0;
}
