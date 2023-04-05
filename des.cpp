#include<iostream>
using namespace std;
class base
{
	public:
	virtual ~base()
		{
			cout<<"base is destroyed\n";
		}
};
class derv:public base
{
	public:
		~derv()
		{
			cout<<"derive is destroyed\n";
		}
};
main()
{
	base *ptr=new derv;
	delete ptr;
}
