#include<iostream>
using namespace std;
class alpha
{
	private:
		int a;
	public:
		void geta()
		{
			cout<<"Enter a:";
			cin>>a;
		}
		void puta()
		{
			cout<<"a="<<a<<"\n";
		}
};
class beta
{
	private:
		int b;
	public:
		void getb()
		{
			cout<<"Enter b:";
			cin>>b;
		}
		void putb()
		{
			cout<<"b="<<b<<"\n";
		}
		//friend class alpha;
};
main()
{
	int alpha:: *ptr=&alpha :: a;
}
