#include<iostream>
using namespace std;
class sort
{
	private:
		int a[],n,left,right;
	public:
	sort(int *s,int x)
	{
		n=x;
		for(int i=0;i<n;i++)
			a[i]=s[i];
	}	
	void input()
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
	}
	int partition(int s[],int l,int r)
	{
		left=l;
		right=r;
		int loc=left;
		left++;
		while(left<=right)
		{
			while(s[loc]<=s[right] && loc<right)
				right--;
			while(s[loc]>=s[left] && loc<left)
				left++;
			if(left<right)
			{
				int var=s[left];
				s[left]=s[right];
				s[right]=var;
			}
		}
		int var=s[loc];
		s[loc]=s[right];
		s[right]=var;
		int p=right;
		return p;
	}
	void quick(int s[],int l,int r)
	{
		if(l<r)
		{
			int p=partition(s,l,r);
			partition(s,l,p-1);
			partition(s,p+1,r);
		}
	}
	void quick_sort(int s[],int l,int r)
	{
		left=l;
		right=r-1;
		quick(s,left,right);
	}
};
int main()
{
	int x[5]={5,4,3,2,1};
	sort s(x,5);
	s.quick_sort(x,0,5);
	for(int i=0;i<5;i++)
		cout<<x[i]<<"\t";
	return 0;
}
