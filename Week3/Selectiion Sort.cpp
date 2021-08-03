#include<iostream>
using namespace std;
void SelectionSort(int a[],int n)
{
	int min,temp,comp=0,count=0;
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				min=a[i];
			}
			count++;
		}
		comp++;
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	cout<<"Swaps= "<<comp<<" "<<"Comparisons= "<<count;
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
		
		SelectionSort(a,n);
	} 
	//int a[]={-13,65,-21,76,46,89,45,12};//{54,65,34,76,78,97,46,32,51,21};
	//int n=sizeof(a)/sizeof(a[0]);
	
}
