#include<iostream>
using namespace std;
class sample
{
	private:
		int a;
	public:
		sample(int x)
		{
			a=x;
			cout<<"This is called\n";
		}
};
main()
{
	sample s1(4),s2(8);
}
