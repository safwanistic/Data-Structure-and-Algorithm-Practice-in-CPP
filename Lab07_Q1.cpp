#include<iostream>
#include<string.h>
using namespace std;

struct node
{
	int SNo;
	int Id;
	node *next;
};
node* create(int SNo)
{
	node *n;
	int num;

	cout << "Serial Number: " << SNo <<endl;
	cout << "Enter ID Number of student: ";
	cin>>num;
	cout<<endl;

	n=new node;
	n->SNo=SNo;
	n->Id=num;
	return n;
}

node* InsertTerm1(node *head,int SNo)
{
	node *n;
	int num;

	if(head==NULL)
	{
		cout << "The list is empty" <<endl;
	}
	cout << "Enter the data for the value you want to insert at the starting Terminal: " <<endl;
	cout << "Enter ID Number of student: ";
	cin>>num;
	cout<<endl;

	n=new node;
	n->SNo=SNo;
	n->Id=num;
	n->next=head;
	head=n;
	return head;
}

void InsertTerm2(node *t,int SNo)
{
	node *n;
	int num;

	cout << "Enter the value for the node you want to insert at the last terminal Node: " <<endl;
	cout << "Enter ID Number of students : ";
	cin>>num;
	cout<<endl;

	n=new node;
	n->SNo=SNo;
	n->Id=num;
	t->next=n;
	n->next=NULL;
}
void display(node *head)
{
	node *P;
	P=head;

	if(head==NULL)
	{
		cout << "The list is empty" <<endl;
	}
	while(P!=NULL)
	{
		cout << "Node Number : " <<P->SNo <<endl;
		cout << "ID Number of student is : " <<  P->rollnum<<endl;
		P=P->next;
	}
}

node* Delete(node *head)
{
	int position=2;
	node *P=head->next;
	node *q=head;

	cout<<endl;
	cout << endl << "Node to be deleted from Second position";
	cout<<endl;

	if(head==NULL)
	{
		cout << "The list is empty." <<endl;
	}

	else
	{
		while(P!=NULL)
		{
			if(position==P->SNo)
			{
				q->next=q->next->next;  //current.next<- current.next.next
				delete(P);
				cout << "The node has been deleted." <<endl;
				return head;
			}
			else if(position==1)
			{
				head=P;
				delete(q);
				cout << "The node has been deleted." <<endl;
				return head;
			}
			else
			{
				P=P->next;
				q=q->next;
			}
		}
		cout << "The node to be deleted was not found." <<endl;
	}
	return head;
}

void search(node *head)
{
	int nNum;
	node *P=head;

	cout<<endl;
	cout << "Enter the SNo which you want to search : ";
	cin>>nNum;
	cout<<endl;

	while(P!=NULL)
	{
		if(nNum==P->SNo)
		{
			cout<< "Node Found!" <<endl;
			cout << "Node Number : " <<P->SNo <<endl;
			cout << "Roll number of student : " <<  P->rollnum<<endl;
			break;
		}
		else
		{
			P=P->next;
		}
	}

	if(P==NULL)
	{
		cout << "Node Not Found!" <<endl;
	}
}

int main()
{
	node *n=NULL;
	node *t=NULL;
	node *h=NULL;
	node *P;
	P=h;
	int nodes,i;
	cout << "Enter the number of nodes to create : ";
	cin>>nodes;
	cout<<endl;

	for(i=1;i<=nodes;i++)
	{
		if(h==NULL)
		{
			n=create(i);
			t=n;
			h=n;
		}
		else
		{
			n=create(i);
			t->next=n;
			t=t->next;
		}
	}
	n->next=NULL;

	h=InsertTerm1(h,(i-nodes)-1);
	InsertTerm2(t,nodes+1);
	display(h);

	h=Delete(h);
	cout << "Nodes after deletion: \n" <<endl;
	cout<<endl;
	display(h);
	search(h);


	return 0;
}

