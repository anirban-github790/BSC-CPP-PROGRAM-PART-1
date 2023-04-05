#include<iostream>
using namespace std;
int i=20;
int main()
{
	int i=10;
	{
		int i=30;
		int & ref=i;
		cout<<"It is in inner"<<"\n";
		cout<<"Value:"<<i<<"\n";
		cout<<"value ref:"<<ref<<"\n";
		cout<<"Value scope resol:"<<::i<<"\n";
	}
	cout<<"It is in outer:"<<"\n";
	cout<<"value:"<<i<<"\n";
	cout<<"value scope:"<<::i<<"\n";
}
