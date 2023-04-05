#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int *p,size;
	cout<<"Enter the size="<<endl;
	cin>>size;
	p=new int[size];
	cout<<"Enter the data"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>p[i];
	}
	cout<<"The data is"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<p[i]<<endl;
	}
	delete []p;
	cout<<"The data is"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<p[i]<<endl;
	}
}
