#include<iostream>
using namespace std;
void SumSequence(int a[],int n,int key)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
				if(a[i]-a[j]==key ) 
				{	
				count++;
				}
		}
	}
	if(count==0)
	cout<<"No sequence found";
	else
	cout<<count;
}
int main()
{
	int t,key;
	cout<<"enter no. of test case";
	cin>>t;
	cout<<"Enetr the search element";
	cin>>key;
	while(t--)
	{
		int size;
		cout<<"Enter the size of array";
		cin>>size;
		int arr[size];
		cout<<"Enter array elements"<<endl;
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		SumSequence(arr,size,key);
	}
}
