#include<iostream>
#include "Node.cpp"
using namespace std;
Node* takeInput(){
	int data;
	cin>>data;
	Node *head=NULL;
	while(!(data==-1))
	{
		Node *newNode=new Node(data);
		if(head==NULL)
		{
			head=newNode;
		}
		else
		{
			Node *temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newNode;
		}
		cin>>data;
	}
	return head;
}
void print(Node *head){
	Node *temp=head;// we should not change head therefore we should copy address of head in temp and then make changes in that.
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void deletenode(Node* head, int i)
{
	int count=0;
	Node *temp=head;
	if(i==0)
	{
		head=temp->next;
		temp->next=NULL;
		delete(temp);
		cout<<"After Deletion:";
		print(head);
	}
	else
	{
	while(count<i-1)
	{
		temp=temp->next;
		count++;
	}
	Node *a = temp->next;
//	Node *b=a->next;
//	temp->next=b;
	temp->next=a->next;
//	a->next=NULL;
	delete(a);
	print(head);
	}
}
void swapNodes(Node* head,int position){
	int count=0;
	Node* temp=head;
	if(position==0){
		Node* a=temp->next;
		int swap;
		swap=temp->data;
		temp->data=a->data;
		a->data=swap;
		print(head);
	}
	else
	{
		while(count<position-1)
		{
			temp=temp->next;
			count++;
		}
		Node* a=temp->next;
		int k;
		k=temp->data;
		temp->data=a->data;
		a->data=k;
		print(head);
	}
}
int main()
{
	/*Node n1(1);
	Node *head=&n1;
	
	Node n2(2);
	n1.next=&n2;
	
	Node n3(3);
	n2.next=&n3;
	
	Node n4(4);
	n3.next=&n4;
	n4.next=NULL;*/
	int position=0;
	Node *head=takeInput(); 
	print(head);
	//deletenode(head,0);
	cout<<"Enter the position you want to swap:";
	cin>>position;
	swapNodes(head,position);
	cout<<endl;
	
}
