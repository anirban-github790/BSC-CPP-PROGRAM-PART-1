#include<iostream>
using namespace std;
class sample
{
	private:
		int a;
	void getdata()
	{
		cout<<"Enter a:"<<endl;
		cin>>a;
	}
	void putdata()
	{
		cout<<"The value of a is:"<<a;
	}
	public:
		void access();
}c;//the object of class sample
inline void sample::access()
{
	getdata();//member function call the member function
	putdata();
}
int main()
{
	c.access();
}

