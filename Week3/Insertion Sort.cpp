#include<iostream>
using namespace std;
void InsertionSort(int a[],int n)
{
	int key,j;
	for(int i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j-=1;
		}
		a[j+1]=key;
	}
}
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cout<<"enter size of array";
		cin>>n;
		cout<<endl;
		int a[n];
		cout<<"enter elements"<<endl;
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		InsertionSort(a,n);
	}
