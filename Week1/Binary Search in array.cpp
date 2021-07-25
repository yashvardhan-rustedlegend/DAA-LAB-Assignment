#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,4,7,6,9};
	int n=sizeof(a)/sizeof(a[0]);
	int x;
	int low;
	int high;
	int mid=(high+low)/2;
	cout<<"Enter the element you want to find";
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(x==a[mid])
		{
			cout<<"Element is equal to mid element";
		}
		else if(x>mid)
		{
			low=mid+1;
			mid=(low+high)/2;
		}
		else if(x<mid)
		{
			high=mid-1;
			mid=(low+high)/2;
		}
		else if(high==low)
		{
			cout<<"element found";
			break;
		}
		else
		{
			cout<<"element not present in the array";
		}
	}
}
