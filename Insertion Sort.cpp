
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;
void insertionSort(vector<int>& a, int n) {
	for (int i = 0; i < n; i++) {
		int key = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}
int main()
{
	vector<int> a = { 6, 10, 5, 7, 11, 8, 16, 4, 9, 14, 18, 21 };
	insertionSort(a, 12);
	for (int i : a) {
		cout << i << " ";
	}
}

