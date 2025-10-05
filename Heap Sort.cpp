
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
void heapify(vector<int> &a, int n, int i) {
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < n && a[left] > a[largest]) {
		largest = left;
	}
	if (right < n && a[right] > a[largest]) {
		largest = right;
	}
	if (largest != i) {
		swap(a[i], a[largest]);
		heapify(a, n, largest);
	}	
}
void heapSort(vector<int>& a, int n) {
	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(a, n, i);
	}
	for (int i = n - 1; i >= 0; i--) {
		swap(a[i], a[0]);
		heapify(a, i, 0);
	}
}
int main()
{
	vector<int> a = { 6, 10, 5, 7, 11, 8, 16, 4, 9, 14, 18, 21 };
	heapSort(a, 12);
	for (int i : a) {
		cout << i << " ";
	}
}

