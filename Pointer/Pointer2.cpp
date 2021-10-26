#include<iostream>
using namespace std;
int main()
{
	int a[10];
	cout<<a<<endl;
	//a=a+1; this statement will give error because array cannot be re-assigned, this condition makes array different from pointer.
	for(int i=0;i<10;i++)
	{
		//cin>>*(a+i);
		cin>>i[a];// this statement is similar to a[i](which is similar to *(a+i);
	}
}
