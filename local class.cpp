#include<iostream>
using namespace std;
class sample
{
	int data;
	public:
		void func()
		{
			class local
			{
				int datac;
				public:
					void put()
					{
						cout<<"Enter datac:";
						cin>>datac;
					}
					void get()
					{
						cout<<"datac="<<datac<<"\n";
					}
			};
			local l1;
			l1.put();
			l1.get();
		}
};
main()
{
	sample s1;
	s1.func();
}
