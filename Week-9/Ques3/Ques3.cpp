#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    priority_queue <int, vector<int>, greater<int> > minheap;

    for(int i=0;i<n;i++)
    {
        minheap.push(arr[i]);
    }

    int ans=0;

    while(minheap.size()>1)
    {
        int e1=minheap.top();
        minheap.pop();
        int e2=minheap.top();
        minheap.pop();

        ans+=e1+e2;
        minheap.push(e1+e2);
    }
    
    cout<<ans<<endl;
    return 0;
}