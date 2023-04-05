#include<iostream>
using namespace std;
void func1()
{
	try
	{
		int x;
		cout<<"Enter x:";
		cin>>x;
		if(x==1)
			throw x;
		else
			throw 'x';
	}
	catch(int a)
	{
		cout<<"Integer\n";
	}
	catch(char c)
	{
		cout<<"Charecter\n";
		throw;
		
	}
}
void func2()
{
	try
	{
		int y;
		cout<<"Enter y:";
		cin>>y;
		if(y==1)
			throw y;
		else
			throw 'y';
	}
	catch(int a)
	{
		cout<<"Integer\n";
	}
	catch(char c)
	{
		cout<<"Charecter\n";
		func1();
		throw;
	}
/*	catch(...)
	{
		cout<<"This is re throw\n";
	}*/
}
main()
{
	try
	{
		func2();
	}
	catch(...)
	{
		cout<<"main rethrowing\n";
	}
}
