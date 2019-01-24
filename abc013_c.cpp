#include<iostream>
#include<algorithm>
#define int long long

using namespace std;

signed main() {
	int N, H;
	cin >> N >> H;
	int A, B, C, D, E;
	cin >> A >> B >> C >> D >> E;
	int ans = A * N;
	H--;

	for (int i = 0; i <= N; i++) {
		int t = H - i * E;
		t *= -1;
		if (t <= (N - i)*D) {
			ans = min(ans, (N - i)*C);
		}
		else if (t > (N - i)*B) {
			continue;
		}
		else {
			t -= D*(N - i);
			int bd = B - D;
			int r = (t + bd - 1) / bd;
			ans = min(ans, r*A + (N - i - r)*C);
		}
	}

	cout << ans << endl;
	return 0;
}