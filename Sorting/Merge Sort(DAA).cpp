#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l,int mid,int r){
	 
	int m=mid-l+1;
	int n=r-mid;
	int Right[n];
	int Left[m]; 
	for(int i=0;i<m;i++)
	{
		Left[i]=arr[l+i];
	}
	for(int i=0;i<n;i++)
	{
		Right[i]=arr[mid+1+i];
	}
	int i = 0, j = 0,k=l;
    while (i < m && j < n) {
        if (Left[i] <= Right[j])
		{
            arr[k]=Left[i];
            i++;}
 
        else
		{
			arr[k]=Right[j];
			j++;
		}
			k++;
    }
     while (i < m){
        arr[k]=Left[i];
		i++;
		k++;}
 
    while (j < n){
        arr[k]=Right[j];
        j++;
        k++;}
    for(int i=0;i<=r;i++)
        cout<<arr[i];
        cout<<endl;
}
void mergeSort(int arr[],int l,int r){
	if(l>=r){//helper(arr,r);
	return;}
	int mid=(l+r)/2;
	mergeSort(arr,l,mid);
	mergeSort(arr,mid+1,r);
	merge(arr,l,mid,r);
}
int main(){
    int n,i,t;
    cin>>t;
    while(t--){
        cin>>n;
        int *arr=new int[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        mergeSort(arr,0,n-1);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
