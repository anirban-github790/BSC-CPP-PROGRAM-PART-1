#include<iostream>
using namespace std;
int main()
{
	int n,temp=1,var=0;
	cout<<"Enter the line:";
	cin>>n;
	for(int line=1;line<=n;line++)
	{
		for(int ch=1;ch<=line;ch++)
		{
			if(ch==1)
			{
				if(ch==line)
				{
					cout<<temp<<"\n";
				}
				else
				{
					cout<<temp<<"\n";
				}
			}
			else if(ch!=line)
			{
				cout<<temp<<" ";
				temp=temp+2;
			}
			else
			{
				cout<<temp<<"\n";
			}
		}
	//	cout<<"\n";
		temp=temp+1;
	}
}
