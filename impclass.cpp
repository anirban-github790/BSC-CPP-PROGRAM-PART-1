#include<iostream>
using namespace std;
class test
{
	private:
		int a,b;
	public:
		test(int x,int y):
			a(x),b(y+x+a)
			{
				cout<<"test class constructor\n";
			}
		void input()
		{
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter b:";
			cin>>b;
		}
		void output()
		{
			cout<<"The value of a is:";
			cout<<a;
			cout<<"\n";
			cout<<"The value of b is:";
			cout<<b;
		}
		void display()
		{
			cout<<"a="<<a<<"\n";
			cout<<"b="<<b<<"\n";
		}
};
int main()
{
	test t(5,10);
	t.display();
	return 0;
}
