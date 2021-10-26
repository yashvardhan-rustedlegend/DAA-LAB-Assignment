#include<iostream>
using namespace std;
int main()
{
	int i=10;
	//int*p =10; the statement will give error
	//int*p =i; the statement will give error
	int* p =&i;// correct statement
	int *pc=p;
	cout<<&p<<" "<<p<<" "<<&i<<" "<<pc<<" "<<*pc<<" "<<&pc;
}
