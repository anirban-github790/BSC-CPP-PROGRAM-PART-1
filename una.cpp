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
		void getcount()
		{
			cout<<"Enter count:";
			cin>>count;
		}
		void putcount()
		{
			cout<<"The count is="<<count<<"\n";
		}
		counter operator++()
		{
			++count;
			return(counter(count));
		}
		counter operator++(int)
		{
			count++;
			return(counter(count));
		}
};
int main()
{
	counter c1,c2(7),c3;
	++c1;
	++c2;
	++c1;
	c1++;
	c2++;
	c1.putcount();
	c2.putcount();
	c3=c1++;
	c3.putcount();
	return 0;
}
