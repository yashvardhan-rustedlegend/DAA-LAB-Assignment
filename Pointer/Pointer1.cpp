#include<iostream>
using namespace std;
int main()
{
	double a=10.54;
	double* p;
	p=&a;
	cout<<sizeof(p)<<endl;
	cout<<p<<endl;
	cout<<*p<<endl;
	p+=1;
	cout<<p;
	
}
