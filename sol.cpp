#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		if (n == 1) {
			cout << -1 << '\n';
			continue;
		}
		// 1st digit = 2
		// n - 1 digits = 3
		for (int i = 0; i < n; i++) {
			cout << (i == 0 ? 2 : 3);
		}
		cout << '\n';
	}
	return 0;
}