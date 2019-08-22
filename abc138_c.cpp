#include"bits/stdc++.h"

using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	vector<int>u(N);
	for (int i = 0; i < N; i++)
	{
		cin >> u[i];
	}

	sort(u.begin(), u.end());
	double ans = u[0];

	for (int i = 1; i < N; i++)
	{
		ans = (double)(ans + u[i]) / 2;
	}
	cout << ans << endl;

	return 0;
}
