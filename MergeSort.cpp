#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

void merge(vector<int>& a, int l, int m, int r)
{
	int n1 = m - l + 1, n2 = r - m;
	vector<int> x(n1);
	vector<int> y(n2);
	for (int i = 0; i < n1; i++)
	{
		x[i] = a[l + i];
	}
	for (int i = 0; i < n2; i++)
	{
		y[i] = a[m + i + 1];
	}
	int index = l;
	int i = 0, j = 0;
	while (i < n1 && j < n2)
	{
		if (x[i] <= y[j])
		{
			a[index++] = x[i++];
		}
		else if (x[i] >= y[j])
		{
			a[index++] = y[j++];
		}
	}
	while (i < n1)
	{
		a[index++] = x[i++];
	}
	while (j < n2)
	{
		a[index++] = y[j++];
	}
}

void mergeSort(vector<int>& a, int l, int r)
{
	if (l < r)
	{
		int mid = (l + r) / 2;
		mergeSort(a, l, mid);
		mergeSort(a, mid + 1, r);
		merge(a, l, mid, r);
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
	mergeSort(a, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
