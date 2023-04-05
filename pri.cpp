#include<iostream>
using namespace std;
class sample
{
	private:
		int a,b;
		void func();
	public:
		void get(int x,int y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<"The value of a is:"<<a<<"\n";
			cout<<"The value of b is:"<<b<<"\n";
			func();
		}
};
void sample::func()
{
	a=a+b;
	b=a-b;
	cout<<"The value of a is:"<<a<<"\n";
	cout<<"The value of b is:"<<b<<"\n";
}
main()
{
	sample c;
	c.get(10,20);
	c.show();
}
