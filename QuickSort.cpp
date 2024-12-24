#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int partition(vector<int>& a, int l, int r)
{
	int i = l - 1;
	int pivot = a[r];
	for (int j = l; j < r; j++)
	{
		if (a[j] <= pivot)
		{
			i++;
			swap(a[i], a[j]);
		}
	}
	i++;
	swap(a[i], a[r]);
	return i;
}
void quicksort(vector<int>& a, int l, int r)
{
	if (l < r)
	{
		int pos = partition(a, l, r);
		quicksort(a, l, pos - 1);
		quicksort(a, pos + 1, r);
	}
}
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	quicksort(a, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
