#include<iostream>
using namespace std;
int main()
{
	int key=5,first=-1,last;
	int arr[]={1,2,5,5,5,6,6,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		if(key==arr[i])
		{
			first=i;
			cout<<first<<endl;
			break;
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		if(key==arr[i])
		{
			last=i;
			cout<<last<<endl;
			break;
		}
	}
	cout<<"occurence of the element is= "<<last-first+1;
}
