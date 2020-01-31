#include<iostream>
#include<vector>
#include<algorithm>

typedef long long ll;

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll N, K;
	cin >> N >> K;
	vector<ll>H(N);
	ll sum = 0;
	for (int i = 0; i < N; i++){
		cin >> H[i];
		sum += H[i];
	}
	sort(H.begin(), H.end(), greater<ll>());
	for (int i = 0; i < K; i++){
		if (N == i) {
			break;
		}
		sum -= H[i];
	}

	cout << sum << endl;

	return 0;
}