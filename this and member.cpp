#include<iostream>
using namespace std;
class sample
{
	private:
		int a,b;
	public:
		void show()
		{
			cout<<"address of a="<<&a<<"\n";
			cout<<"address of b="<<&b<<"\n";
		}
		void dis()
		{
			cout<<this<<"\n";
		}
};
main()
{
	sample s1,s2;
	s1.show();
	cout<<"Add of s1=";
	s1.dis();
	s2.show();
	cout<<"Add of s2=";
	s2.dis();
}
