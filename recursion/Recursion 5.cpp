#include<iostream>
using namespace std;
void numberofdigit(int n,int count)
{
	if(n==0){
	cout<<count;
	return;}
	else{
		count++;
		numberofdigit(n/10,count);
	}
}
int main()
{
	int n,count=0;
	cin>>n;
	numberofdigit(n,count);
	return 0;
}
