#include<iostream>
using namespace std;
class sample
{
	int a,b;
	public:
		void getdata(){a=10;b=15;}
		friend int mean(sample s);
};
int mean(sample s)
{
	int var=s.a+s.b;
	return int(var);
}
main()
{
	sample s;
	s.getdata();
	cout<<"The friend function is:"<<mean(s);
}
