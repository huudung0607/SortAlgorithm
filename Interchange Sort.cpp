#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
// sắp xếp dựa theo cặp nghịch thế
// cặp nghịch thế là khi i < j nhưng a[i] > a[j]
void interchangeSort(vector<int>& a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
			}
		}
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
	interchangeSort(a, n);
	for (auto x : a) {
		cout << x << " ";
	}
}
