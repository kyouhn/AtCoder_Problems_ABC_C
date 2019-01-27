#include "bits/stdc++.h"

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	vector<int>H(N);
	int ans = 1e9;


	for (int i = 0; i < N; i++) {
		cin >> H[i];
	}
	sort(H.begin(), H.end());

	for (int i = 0; i + K <= N; i++) {
		ans = min(ans, H[i + K - 1] - H[i]);
	}
	cout << ans << endl;
	return 0;
}