#include<iostream>
using namespace std;
int pow(int n,int k)
{
	if(k==0)
	return 1;
	else{
	k--;
	return n*pow(n,k);
	}
}
int main()
{
	int n;
	int k;
	cin>>n;
	cin>>k;
	cout<<pow(n,k);
	return 0;
}
