#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n = 7;
		long long b[n];
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		// choose three numbers that will add up to the largest element in the sequence
		long long ans[3] = {0};
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				for (int k = j + 1; k < n; k++) {
					if (b[i] + b[j] + b[k] == b[n - 1]) {
						ans[0] = b[i];
						ans[1] = b[j];
						ans[2] = b[k];
						break;
					}
				}
				if (ans[0] > 0) {
					break;
				}
			}
			if (ans[0] > 0) {
				break;
			}
		}
		for (int i = 0; i < 3; i++) {
			cout << ans[i] << " ";
		}
		cout << '\n';
	}
	return 0;
}
