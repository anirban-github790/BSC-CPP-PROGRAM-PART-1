#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	struct pro
	{
		int x;
		int y;
	};
	pro c1,c2,c3;
	cout<<"Enter the no:";
	cin>>c1.x>>c1.y;
	cin>>c2.x>>c2.y;
	cout<<"c1.x="<<c1.x<<setw(10)<<"c1.y="<<c1.y<<"\n";
	cout<<"c2.x="<<c2.x<<setw(10)<<"c2.y="<<c2.y<<"\n";
}
