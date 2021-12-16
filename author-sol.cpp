#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n = 7;
		int b[n];
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		// 1st and 2nd element = first two elements in the sequence
		// 3rd element = subract the first two elements from the last element
		cout << b[0] << " " << b[1] << " " << b[n - 1] - b[0] - b[1] << '\n';
	}
	return 0;
}
