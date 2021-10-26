#include<iostream>
using namespace std;
int SumPair(int arr[],int n,int num){
	static int count=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n-1;j++){
			if(arr[i]+arr[j]==num)
			count++;
		}
	}
	return count;
}
int main()
{
	int num;
	cout<<"Enter the num";
	cin>>num;
	int arr[]={1,2,3,3,4,2,5,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<SumPair(arr,n,num);
}
