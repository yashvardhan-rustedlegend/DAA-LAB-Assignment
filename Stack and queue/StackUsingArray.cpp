#include<climits>
#include<iostream>
using namespace std;
class StackUsingArray{
	int *data;
	int nextIndex;
	int capacity;
	public:
		StackUsingArray(int totalsize){
			data=new int[totalsize];
			nextIndex=0;
			capacity=totalsize;
		}
		//return the number of elements presents in my stack
		int size(){
			return nextIndex;
		}
		bool isEmpty(){
			/*if(nextIndex==0){
				return true;
			}
			else
			return false;*/
			return nextIndex==0;
		}
		
		void push(int element){
			if(nextIndex==capacity){
				cout<<"Stack full"<<endl;
				return;
			}
			data[nextIndex] = element;
			nextIndex++;
		}
		//delete element
		int pop(){
			if(isEmpty()){
				cout<<"Stack is empty"<<endl;
				return INT_MIN;
			}
			nextIndex--;
			return data[nextIndex];
		}
		int top(){
			if(isEmpty()){
				cout<<"Stack is empty"<<endl;
				return INT_MIN;
			}
			return data[nextIndex-1];
		}
		
};


int main(){
	StackUsingArray s(4);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.pop();
	cout<<s.top();
}
