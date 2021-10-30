#include<iostream>
#include "Node.cpp"
using namespace std;
class Stack{
	public:
		Node* head;
		int count;
	Stack()
	{
		head=NULL;
		count=0;
	}
	int isEmpty()
	{
		if(head=NULL)
		return true;
		else
		return false;
	}
	int size()
	{
		return count;
	}
	void push(int data)
		{
			Node *newNode=new Node(data);
			if(head==NULL)
			{
				head=newNode;
				count++;
			}
			else
			{
				  count++;
				  newNode->next=head;
				  head=newNode;
			}
		}
	void pop()
	{
		if(count==0){
			cout<<"Stack is empty"<<endl;
		}
		else
		{
			count--;
			cout<<"Popped: "<<head->data<<endl;
			head=head->next;
		}
	}
};
int main(){
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<"Size:"<<s.size()<<endl;
	s.pop();
	cout<<"Size:"<<s.size()<<endl;
	s.pop();
	cout<<"Size:"<<s.size()<<endl;
	s.pop();
	cout<<s.size()<<endl;
	
}
