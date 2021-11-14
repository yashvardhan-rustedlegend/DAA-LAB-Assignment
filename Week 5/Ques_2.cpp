#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter the elements of array:";
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cout<<"Enter the element you want to find the sum of:";
	cin>>key;
	int l=0,r=n-1,f=0;
	sort(arr,arr+n);
	while(l<r){
		if(arr[l]+arr[r]==key){
		f++;
		cout<<"Sum found"<<arr[l]<<" "<<arr[r]<<endl;
		}
		
		if(arr[l]+arr[r]<key)
		l++;
		
		else
		r--;
	}
	if(f==0)
	cout<<"No such pair exist";
	return 0;
}
