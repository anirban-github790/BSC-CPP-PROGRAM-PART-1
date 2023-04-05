#include<iostream>
using namespace std;
class sample
{
	private:
		int a,b;
	public:
		sample()
		{
			cout<<"It is created"<<"\n";
		}
		sample(int d1,int d2)
		{
			a=d1;
			b=d2;
		}
		~sample()
		{
			cout<<"It is destroyed"<<"\n";
		}
		void show()
		{
			cout<<"a="<<a<<"\n";
			cout<<"b="<<b<<"\n";
		}
};
main()
{
	sample s1(5,10);
	s1.show();
	{
		sample s2,s3;
	}
}
