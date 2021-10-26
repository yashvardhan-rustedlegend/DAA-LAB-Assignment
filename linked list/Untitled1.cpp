#include<iostream>
#include "Node.cpp"
using namespace std;
Node* takeInput(){
	int data;
	cin>>data;
	Node *head=NULL;
	while(data!=-1)
	{
		Node *newNode=new Node(data);
		if(head==NULL){
			head=newNode;
		}
		else{
		Node *temp=head;
		while(temp->next!=NULL){
			temp->next=newNode;
		}
		temp->next=newNode;
	}
		
		cin>>data;
	}
	return head;
}
void print(Node *head){
	Node * temp=head;// we should not change head therefore we should copy address of head in temp and then make changes in that.
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
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
	Node *head=takeInput(); 
	print(head);
	
}
