#include<iostream>
using namespace std;
void SumSequence(int a[],int n)
{
	int count=0;
	for(int k=0;k<n;k++)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n-1;j++)
			{
				if(a[k]==a[i]+a[j])
				{
				count++;	
				cout<<k<<" "<<i<<" "<<j;
				}
			}
		}
	}
	if(count==0)
	cout<<"No sequence found";
}
int main()
{
	int t;
	cout<<"enter no. of test case";
	cin>>t;
	while(t--)
	{
		int size;
		cout<<"Enter the size of array";
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		SumSequence(arr,size);
	}
}


