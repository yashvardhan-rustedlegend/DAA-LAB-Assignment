#include <bits/stdc++.h>

using namespace std;
  
struct Item {
    int value, weight;
  
    Item(int value, int weight)
        : value(value), weight(weight)
    {
    }
};
  
bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}
  
double fractionalKnapsack(struct Item arr[], int N, int size)
{
    vector <int> item, weight;

    sort(arr, arr + size, cmp);

    int curWeight = 0;
    double finalvalue = 0.0;
  
    for (int i = 0; i < size; i++) 
    {
        if (curWeight + arr[i].weight <= N) 
        {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;

            item.push_back(arr[i].value);
            weight.push_back(arr[i].weight);
        }
  
        else 
        {
            int remain = N - curWeight;
            finalvalue += arr[i].value * ((double)remain / arr[i].weight);

            item.push_back(arr[i].value);
            weight.push_back(curWeight-arr[i].weight);
            break;
        }
    }
    cout<<"Item-Weight\n";
    for(int i=0;i<item.size();i++)
    cout<<item[i]<<"-"<<weight[i]<<endl;
    cout<<"Maximum value: ";
    return finalvalue;
}
  

int main()
{
    // knapsack value
    int N = 16;
    
    // weight and value pairs
    Item arr[] = { { 6, 6 },
                   { 10, 2 },
                   { 3, 1 },
                   { 5, 8 },
                   { 1, 3},
                   { 3, 5}};
  
    int size = sizeof(arr) / sizeof(arr[0]);
  
    cout << fractionalKnapsack(arr, N, size);
    return 0;
}