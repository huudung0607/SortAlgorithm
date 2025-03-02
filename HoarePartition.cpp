#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
//hoare
int partition(vector<int>& a, int l, int r)
{
	int i = l - 1, j = r + 1;
	int pivot = a[l];
	while (true)
	{
		do
		{
			i++;
		} while (a[i] < pivot);	
		do
		{
			j--;
		} while (a[j] > pivot);
		if (i < j)
		{
			swap(a[i], a[j]);
		}
		else
		{
			return j;
		}
	}
}
void quickSort(vector<int>& a, int l, int r)
{
	if (l < r)
	{
		int p = partition(a, l, r);
		quickSort(a, l, p);
		quickSort(a, p + 1, r);
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
	quickSort(a, 0, n - 1);
	for (auto x : a) {
		cout << x << " ";
	}
}
