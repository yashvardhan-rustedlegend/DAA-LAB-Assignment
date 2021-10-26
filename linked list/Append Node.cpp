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
	cout << "cnt" << count << endl;
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
Node* Append(Node* head,int n){
	int i=1;
	int len=length(head);
	int count=len-n;
	cout << "cnt new:" << count << endl;
	Node* curr=head;
	if(i < count+1)
	{
		cout << " COUNT THE FUCK" << count << endl;
		cout << "currdata:" << curr->data << endl;
		curr=curr->next;
		
		i++;	
		cout << " value of i " << i<< endl;
	}
	cout <<"CU" << curr->data <<endl;
	Node* head2=curr->next;
	curr->next=NULL;
	Node* temp=head2;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=head;
	return head2;
}
int main()
{
	int i;
	Node *head=takeInput(); 
	print(head);
	cout<<"Enter the position from where you want to append the linked list:";
	cin>>i;
	Node* NewHead=Append(head,i);
	print(NewHead);
	cout<<endl;
	
}
