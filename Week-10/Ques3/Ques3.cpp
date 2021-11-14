#include <bits/stdc++.h>
using namespace std;

void findMajority(int arr[], int n)
{
	int maxCount = 0;
	int index = -1; 
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (arr[i] == arr[j])
				count++;
		}


		if (count > maxCount) {
			maxCount = count;
			index = i;
		}
	}

	if (maxCount > n / 2)
		cout << "yes" << endl;

	else
		cout << "no " << endl;
}

double findMedian(int a[], int n)
{
    sort(a, a + n);
    if (n % 2 != 0)
        return (double)a[n / 2];
    return (double)(a[(n - 1) / 2] + a[n / 2])/2.0;
}

int main()
{
    int n;
    cin>>n;

	int arr[9]; 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
	findMajority(arr, n);
    cout<<findMedian(arr,n)<<endl;

	return 0;
}

