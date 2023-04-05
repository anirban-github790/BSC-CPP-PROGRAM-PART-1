#include<iostream>
using namespace std;
class a
{
	private:
		int da;
	public:
		void display()
		{
			cout<<"Class a\n";
		}
};
class b
{
	private:
		int db;
	public:
		void display()
		{
			cout<<"Class b\n";
		}
};
class c
{
	private:
		int dc;
	public:
		void display()
		{
			cout<<"Class c\n";
		}
};
class d:virtual public a,virtual public b,virtual public c
{
	public:
		void showd()
		{
			cout<<"Class d\n";
		}
};
main()
{
	d d1;
	d1.a::display();
}
