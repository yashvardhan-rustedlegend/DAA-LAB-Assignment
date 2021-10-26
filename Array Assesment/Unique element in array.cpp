#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int helper(int n){
	cout<<n;
}
int Unique(int arr[],int n)
{
	static int count=1;
	for(int i=0;i<n;i++)
	{
		count=0;
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j])
			count++;
		}
		if(count==1)
		helper(arr[i]);
	}
	
}
int main(){
	int arr[]={6, 2, 5, 2, 2, 6, 6,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	Unique(arr,n);
}
