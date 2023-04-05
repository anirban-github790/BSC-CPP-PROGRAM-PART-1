#include<iostream>
using namespace std;
class item
{
	private:
		int data;
	public:
		item()
		{
			data=0;
		}
		item(int x)
		{
			data=x;
		}
		friend item operator+(int,item);
		void display()
		{
			cout<<"data="<<data<<"\n";
		}
};
item operator+(int i2,item i)
{
	item i1;
	i1.data=i2+i.data;
	return i1;
}
main()
{
	item s1,s(20);
	s1=10+s;
	s1.display();
	s1=s+10;
	s1.display();
}
