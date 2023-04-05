#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch[30];
	int n;
	ofstream fout("text.txt");
	cout<<"Enter some words:";
	gets(ch);
	cout<<"Enter the number:";
	cin>>n;
	fout<<ch;
	fout<<"\n";
	fout<<n;
	fout.close();
	char ch1[30];
	int n1;
	ifstream fin("text.txt");
	fin>>ch1;
	fin>>n1;
	cout<<"ch1:"<<ch1<<"\n";
	cout<<"n1:"<<n1;
	fin.close();
	return 0;
}
