#include<iostream>
using namespace std;
class array
{
	char name[4];
	public:
		void get();
		void put();
};
void array::get()
{
	cout<<"Enter the data:";
	cin>>name;
}
void array::put()
{
	cout<<"The output:"<<name<<"\n";
}
const int size=4;
main()
{
	array obj[size];
	for(int i=0;i<size;i++)
	{
		obj[i].get();
	}
	for(int i=0;i<size;i++)
	{
		obj[i].put();
	}
}
