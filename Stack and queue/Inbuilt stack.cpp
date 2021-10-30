#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> s;
	s.push(10);
	s.push(20);
	s.pop();
	s.empty();
	cout<<s.top()<<endl;
	cout<<s.size()<<endl;
}
