#include<iostream>
using namespace std;
void sample()
{
	try
	{
		int x;
		cout<<"Enter x:";
		cin>>x;
		if(x==1)
			throw x;
		else if(x==0)
			throw 'x';
		else
			throw 9.768;
	}
	catch(int a)
	{
		cout<<"This is integer\n";
		throw;//this is re throwing
	}
	catch(char c)
	{
		cout<<"This is charecter\n";
	}
	catch(double)
	{
		cout<<"This is double\n";
	}
}
main()
{
	try
	{
		sample();
	}
	catch(...)
	{
		cout<<"This is the re throwing";
	}
}
