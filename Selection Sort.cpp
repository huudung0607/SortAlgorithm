
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
void selectionSort(vector<int>& a, int n) {
	for (int i = 0; i < n - 1; i++) {
		int mindx = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[mindx]) {
				mindx = j;
			}
		}
		swap(a[i], a[mindx]);
	}
}
int main()
{
	vector<int> a = { 6, 10, 5, 7, 11, 8, 16, 4, 9, 14, 18, 21 };
	selectionSort(a, 12);
	for (int i : a) {
		cout << i << " ";
	}
}

