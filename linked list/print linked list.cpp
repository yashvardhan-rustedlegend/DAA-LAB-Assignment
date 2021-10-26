#include<iostream>
#include "Node.cpp"
using namespace std;
void print(Node *Head){
	Node * temp=Head;// we should not change head therefore we should copy address of head in temp and then make changes in that.
	while(Head!=NULL){
		cout<<Head->data<<" ";
		Head=Head->next;
	}
}
int main()
{
	Node n1(1);
	Node *Head=&n1;
	
	Node n2(2);
	n1.next=&n2;
	
	Node n3(3);
	n2.next=&n3;
	
	Node n4(4);
	n3.next=&n4;
	n4.next=NULL;
	
	print(Head);
	
}
