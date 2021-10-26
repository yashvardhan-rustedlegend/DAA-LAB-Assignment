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
int print(Node *head){
	int count=0;
	Node *temp=head;// we should not change head therefore we should copy address of head in temp and then make changes in that.
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
		count++;
	}
	cout<<endl;
	cout<<count<<endl;
	return count;
}
void midPointElement(Node* head,int count){
	Node* temp=head;
	if(count==1 && count==2)
	{
		cout<<"No middle element";	
	}
	int i=0;
	if(count%2==0)
	{
		count=count/2;
		while(i<count-1){
			temp=temp->next;
			i++;
		}
		cout<<temp->data;
	}
	else
	{
		count=count/2;
		while(i<count){
			temp=temp->next;
			i++;
		}
		cout<<temp->data;
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
	int count=print(head);
	midPointElement(head,count);
	cout<<endl;
	
}
