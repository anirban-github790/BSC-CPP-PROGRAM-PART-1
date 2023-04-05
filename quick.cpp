#include<iostream>
using namespace std;
int partition(int a[],int left,int right)
{
	int loc=left;
	left=left+1;
	while(left<=right)
	{
		while(a[loc]<=a[right] && loc<right)
			right--;
		while(a[loc]>=a[left] && loc<left)
			left++;
		if(left<right)
		{
			int var=a[left];
			a[left]=a[right];
			a[right]=var;
		}
	}
	int var=a[loc];
	a[loc]=a[right];
	a[right]=var;
	int p=right;
	return p;
}
void quick(int a[],int left,int right)
{
	if(left<right)
	{
		int p=partition(a,left,right);
		quick(a,left,p-1);
		quick(a,p+1,right);
	}
}
int main()
{
	int a[100],n,l,r;
	cout<<"Enter the size:";
	cin>>n;
	l=0;
	r=n-1;
	cout<<"Enter the array input:\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"The array is:\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	quick(a,l,r);
	cout<<"\nThe sorted array is:\n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
	return 0;
}
