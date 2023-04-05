#include<iostream>
using namespace std;
class counter
{
	private:
		int count;
	public:
		counter()
		{
			count=0;
		}
		counter(int c)
		{
			count=c;
		}
		int operator++()
		{
			++count;
			return count;
		}
		int operator++(int)
		{
			count++;
			return count;
		}
};
int main()
{
	counter c1,c2(6);
	cout<<"The pre-increment:"<<++c1<<"\n";
	cout<<"The pre-increment:"<<++c2<<"\n";
	cout<<"The post-increment:"<<c1++<<"\n";
	cout<<"The post-increment:"<<c2++<<"\n";
	return 0;
}
