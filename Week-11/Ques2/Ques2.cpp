#include <bits/stdc++.h>
using namespace std;
int count(int S[], int m, int n)
{
	if (n == 0)
		return 1;
	if (n < 0)
		return 0;
	if (m <= 0 && n >= 1)
		return 0;
	return count(S, m - 1, n) +
		count(S, m, n - S[m - 1]);
}

int main()
{
	int n,m;
    cin>>n;
    int arr[4];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
	cout << " " << count(arr, n, m);
	return 0;
}