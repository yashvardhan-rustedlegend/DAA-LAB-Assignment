#include <iostream>
using namespace std;
void swap(int *arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void heapify(int *arr, int n, int i) {
    int c1 = 2*i+1;
    int c2 = 2*i+2;
    int max = i;
    if (c1 < n and arr[c1] > arr[max]) {
        max = c1;
    }
    if (c2 < n and arr[c2] > arr[max]) {
        max = c2;
    }
    if (max != i) {
        swap(arr, i, max);
        heapify(arr, n, max);
    }
}
void buildheap(int *arr, int n) {
    for (int i=n/2; i>=0; i--) {
        heapify(arr, n, i);
    }
}
int extract(int *arr, int &n) {
    swap(arr, n-1, 0);
    heapify(arr, n-1, 0);
    int temp = n-1;
    n = n-1;
    return arr[temp];
}
void insert(int *arr, int &n, int ele) {
    n = n+1;
    arr[n-1] = ele;
    int i = n-1;
    int parent = (i-1)/2;
    while (arr[i] > arr[parent] and i >= 0) {
        swap(arr, i, parent);
        i = parent;
        parent = (i-1)/2;
    }
}
void printheap(int *arr, int n) {
    for(int i=0; i<n; i++) 
        cout << arr[i] << " ";
    cout << endl;
}
void heapsort(int* arr, int n) {
    int cap = n;
    while(n > 0) {
        swap(arr, 0, n-1);
        heapify(arr, n-1, 0);
        n = n-1;
    }  
    n = cap;
    printheap(arr, n);
}
int main()
{
    int n;
    cout << "Enter the size of Binary Tree: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of Binary Tree in levelOrder manner: " << endl;
    for(int i=0; i<n; i++) 
        cin >> arr[i];
    
    cout << "your Max heap is: " << endl;
    printheap(arr, n);
    cout << "your converted Max heap is: " << endl;
    buildheap(arr, n);
    printheap(arr, n);
    // cout << "Extracted maximum element of heap: " << extract(arr, n) << endl;
    // cout << "New maxheap is: " << endl;
    // printheap(arr, n);
    
    // int ele;
    // cout << "Enter the element to be inserted in heap: ";
    // cin >> ele;
    // insert(arr, n, ele);
    // cout << "New maxheap after adding " << ele <<" is :" << endl;
    // printheap(arr, n);
     
    cout << "after applying heap sort: " << endl;
    heapsort(arr, n);
    delete [] arr;
    return 0;
}
