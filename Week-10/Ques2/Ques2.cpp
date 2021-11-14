#include <iostream>
#include <algorithm>
using namespace std;

struct Job
{
	char id;
	int dead;
	int profit;
};

bool comparison(Job a, Job b)
{
	return (a.profit > b.profit);
}

void printJobScheduling(Job arr[], int n)
{
	sort(arr, arr + n, comparison);

	int result[7];
	bool slot[7];

	for (int i = 0; i < n; i++)
		slot[i] = false;

	for (int i = 0; i < n; i++)
	{
		for (int j = min(n, arr[i].dead) - 1; j >= 0; j--)
		{
			if (slot[j] == false)
			{
				result[j] = i;
				slot[j] = true;
				break;
			}
		}
	}

	int count=0;
	cout << "Selected task ids: ";
	for (int i = 0; i < n; i++)
		if (slot[i])
			{
				cout << arr[result[i]].id << " ";
				count++;
			}
	cout<<"\nNo. of tasks= "<<count<<endl;
}

int main()
{
	Job arr[] = {{'a', 2, 2}, {'b', 3, 1}, {'c', 8, 3}, {'d', 6, 2}, {'e', 2, 2}, {'f', 5, 2}, {'g', 3, 1}};

	int n = sizeof(arr) / sizeof(arr[0]);
	printJobScheduling(arr, n);
	return 0;
}