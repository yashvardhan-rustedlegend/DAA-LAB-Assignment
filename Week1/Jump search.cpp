#include<iostream>
#include<cmath>

using namespace std;
int jumpSearch(int array[],int size,int key){
	int start=0;
	int end=sqrt(size);
	while(array[end] <= key && end<size){
		start=end;
		end+=sqrt(size);
		if(end>size)
		end=size-1;
	}
	for(int i=start;i<=end;i++){
		if(array[i]==key)
		return i;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
	int n,key,loc;
	cout<<"Enter number of items: ";
	cin>>n;
	int arr[n];
	cout<<"Enter items: "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter search element";
	cin>>key;
	if((loc= jumpSearch(arr,n,key)) >=0)
	cout<<"Position"<<loc+1<<endl;
	else
	cout<<"Not found";}
}
