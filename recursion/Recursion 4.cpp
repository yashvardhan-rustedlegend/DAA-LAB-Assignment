#include<iostream>
using namespace std;
void increment(int n)
{
	if(n==0)
	return;
	else{
		increment(n-1);
		cout<<n;
	}
}
int main()
{
	int n;
	cin>>n;
	increment(n);
	return 0;
}
