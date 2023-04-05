#include<iostream>
using namespace std;
class alpha;
class beta
{
	private:
		int b;
	public:
		beta(int x)
		{
			b=x;
		}
		void friend sum(alpha,beta);
};
class alpha
{
	private:
		int a;
	public:
		alpha(int y)
		{
			a=y;
		}
		void friend sum(alpha,beta);
};
void sum(alpha a1,beta b1)
{
	cout<<"sum="<<a1.a+b1.b<<"\n";
}
main()
{
	alpha a2(7);
	beta b2(8);
	cout<<"The sum of data members of the two different classes\n";
	sum(a2,b2);
}
