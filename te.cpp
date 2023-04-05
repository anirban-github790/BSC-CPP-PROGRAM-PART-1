#include<iostream>
using namespace std;
class space
{
	private:
		int d1,d2;
	public:
		void get();
		void show();
		int sum();
};
void space::get()
{
	cout<<"Enter two number:"<<endl;
	cin>>d1>>d2;
}
void space::show()
{
	cout<<"the two numbers are:"<<endl;
	cout<<d1<<endl<<d2<<endl;
}
int space::sum()
{
	return(d1+d2);
}
int main()
{
	space s;
	s.get();
	s.show();
	cout<<"sum="<<s.sum()<<endl;
	return 0;
}
