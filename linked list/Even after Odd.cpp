#include<iostream>
#include "Node.cpp"
using namespace std;
Node* takeInput(){
	int data;
	cin>>data;
	Node *head=NULL;
	Node *head2=NULL;
	while(!(data==-1))
	{
		if(data%2==0)
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
		}
		else
		{
			Node *newNode2=new Node(data);
			if(head2==NULL)
			{
				head2=newNode2;
			}
			else
			{
				Node *temp=head2;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=newNode2;
			}
		}
		
		cin>>data;
	}
	Node* a=head;
	while(a->next!=NULL){
		a=a->next;
	}
	a->next=head2;
	return head;
}
int length(Node *head){
	int count=0;
	Node *temp=head;// we should not change head therefore we should copy address of head in temp and then make changes in that.
	while(temp!=NULL){
		temp=temp->next;
		count++;
	}
	return count;
}
int print(Node *head){
	int count=0;
	Node *temp=head;// we should not change head therefore we should copy address of head in temp and then make changes in that.
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main()
{
	Node *head=takeInput();
	cout<<"Even After Odd"<<endl; 
	print(head);
	cout<<endl;
	
	
}
