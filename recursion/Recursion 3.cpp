#include<iostream>
using namespace std;
void decrement(int n)
{
	if(n==0)
	return;
	else{
		cout<<n;
		decrement(n-1);
	}
}
int main()
{
	int n;
	cin>>
	n;
	decrement(n);
	return 0;
}
