#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	char a, b;
	cin >> a >> b;
	// follow this order:
	// brown <- blue <- green
	char ans = 'G';
	if (a == 'R' || b == 'R') {
		ans = 'R';
	} else if (a == 'B' || b == 'B') {
		ans = 'B';
	}
	cout << ans << '\n';
	return 0;
}
