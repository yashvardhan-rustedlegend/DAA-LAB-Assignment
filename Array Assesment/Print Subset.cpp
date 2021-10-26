#include<iostream>
using namespace std;
int subset(int arr[],int n,int k){
	static int count=0;
	static int sum=0;
	for(int i=0;i<n;i++){
	if(n<=0)
	return count;
	sum=arr[0]+subset(arr+1,n-1,k);
		if(sum==k){
		count++;
		sum=0;
		subset(arr+1,n-1,k);
		break;}
	}
}
int main()
{
	int num;
	cout<<"Enter the num";
	cin>>num;
	int arr[]={1,1,1,1};//{1,2,3,3};//{5,1,2,6,7,4,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<subset(arr,n,num);
}
