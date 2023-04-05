#include<iostream>
using namespace std;
void func(int & x)
{
//	int & a=40;
	x=x+10;
	cout<<"The value of x:"<<x<<"\n";
	//cout<<a;
}
main()
{
	int m=20;
	func(m);
	cout<<"The value of m:"<<m;
	return 0;
}
