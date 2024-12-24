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
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int i = 0, j = 0;
	while (i < n && j < m)
	{
		if (a[i] <= b[j])
		{
			cout << a[i] << " ";
			i++;
		}
		else if (a[i] >= b[j])
		{
			cout << b[j] << " ";
			j++;
		}
	}
	while (i < n)
	{
		cout << a[i] << " ";
		i++;
	}
	while (j < m)
	{
		cout << b[j] << " ";
		j++;
	}
}
