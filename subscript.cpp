#include<iostream>
using namespace std;
class array
{
	public:
		int arr[20];
	public:
		int & operator[](int n)
		{
			if(n<0 || n>=20)
			{
				cout<<"index out of bound"<<endl;
				exit(1);
			}
			return(arr[n]);
		}
};
int main()
{
	array a;
	int n;
	cout<<"Enter the size:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<a.arr[i]<<endl;
	}
}
