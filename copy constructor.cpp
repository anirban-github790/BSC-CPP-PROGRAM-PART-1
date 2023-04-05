#include<iostream>
using namespace std;
class sample
{
	private:
		int a,b;
	public:
		sample()
		{
			a=0;
			b=0;
		}
		sample(sample &);
		sample(int x,int y)//Inline constructor
		{
			a=x;
			y=b;
		}
		void show()
		{
			cout<<"a="<<a<<"\n";
			cout<<"b="<<b<<"\n";
		}
};
sample::sample(sample & i)//This is called copy constructor
{
	a=i.a;
	b=i.b;
}
main()
{
	sample s1,s2(10,20),s3;
	s1.show();
	s2.show();
	sample(s2).show();
}
