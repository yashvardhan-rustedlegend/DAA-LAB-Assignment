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
void ReverseLinkedList(Node* head){
	Node* left=head;
	Node* right=head;
	int len=length(head);
	int i=0,j=len-1;
	int temp;
	while(i<j)
	{
		int k=0;
		while(k<j)
		{
			right=right->next;
			k++;
		}
		temp=left->data;
		left->data=right->data;
		right->data=temp;
		i++;
		j--;
		left=left->next;
		right=head;
	}
	print(head);
}
int main()
{
	Node *head=takeInput(); 
	print(head);
	ReverseLinkedList(head);
	cout<<endl;
	
}
