#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
void bubbleSort(vector<int>& a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			int num1 = a[j];
			int num2 = a[j + 1];
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
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
	bubbleSort(a, n);
	for (auto x : a) {
		cout << x << " ";
	}
}
