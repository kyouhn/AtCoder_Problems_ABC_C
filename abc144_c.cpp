#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	long long N;
	cin >> N;
	long long ans = 1e18;
	for (long long i = 1; i * i <= N; i++){
		if (N % i != 0) {
			continue;
		}
		long long tmp = N / i;
		ans = min(ans, i + tmp - 2);
	}
	cout << ans << endl;

	return 0;
}