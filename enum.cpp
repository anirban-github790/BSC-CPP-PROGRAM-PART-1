#include<iostream>
using namespace std;
main()
{
	enum dow{sun=4,mon=10,tue=15,wed=17,thu,fri=1,sat=9};
	dow d1,d2;
	d1=sun;
	d2=tue;
	int dif=d2-d1;
	cout<<"The difference="<<dif;
}
