#include<iostream>
using namespace std;
template<typename t>
class list
{
	private:
		struct node
		{
			t info;
			struct node *next;
		};typedef struct node node;
		node *start;
	public:
		node *create_node()
		{
			node *p;
			cout<<"Enter the info:";
			cin>>p->info;
			node *next=NULL;
			return p;
		}
		list()
		{
			start=NULL;
		}
		void insert_begin();
		void display();
};
template<class t>
void list<t>::insert_begin()
{
	node *p=create_node();
	if(start==NULL)
	{
		start=p;
		p->next=start;
	}
	else
	{
		node *q=start;
		while(q->next!=start)
			q=q->next;
		p->next=start;
		start=p;
		q->next=start;
	}
}
template<class t>
void list<t>::display()
{
	node *p=start;
	if(start==NULL)
	{
		cout<<"List is empty\n";
		exit(0);
	}
	else
	{
		do
		{
			cout<<p->info<<"\n";
		}while(p->next!=start);
	}	
}
int main()
{
	int choice;
	list<int> l1;
	do
	{
		cout<<"\n1.Insert begin\n2.Display\n3.Exit\n";
		cout<<"Enter the choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				l1.insert_begin();
				break;
			case 2:
				l1.display();
				break;
			default:
				cout<<"Wrong choice\n";
				exit(0);
		}
	}while(choice!=3);
	return 0;
}
