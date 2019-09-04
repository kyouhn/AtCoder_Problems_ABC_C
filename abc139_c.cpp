#include"bits/stdc++.h"

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	cin >> N;
	vector<int>H(N);
	for (int i = 0; i < N; i++)
	{
		cin >> H[i];
	}
	int ans = 0;
	int cnt = 0;

	for (int i = 1; i < N; i++)
	{
			if (H[i - 1] >= H[i]) {
				cnt++;
			}
			else {
				cnt = 0;
			}
			ans = max(ans, cnt);
	}

	cout << ans << endl;
	return 0;
}
