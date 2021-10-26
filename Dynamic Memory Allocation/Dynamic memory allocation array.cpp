#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *p=new int[n];//memory allocated to array at runtime.
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	int max=-1;
	for(int i=0;i<n;i++)
	{
		if(max<p[i])
		{
			max=*(p+i);
		}
	}
	cout<<max<<endl;
}
