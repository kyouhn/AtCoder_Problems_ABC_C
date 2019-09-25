#include<iostream>
#include<vector>

using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll N, K, Q;
	cin >> N >> K >> Q;
	vector<ll>A(Q);
	vector<ll>B(N);

	for (int i = 0; i < N; i++){
		B[i] = K;
	}

	for (int i = 0; i < Q; i++){
		cin >> A[i];
		int plus = A[i];
		B[plus-1] += 1;
	}
	for (int i = 0; i < N; i++){
		B[i] -= Q;
		if (B[i] <= 0) {
			cout << "No" << endl;
		}
		else {
			cout << "Yes" << endl;
		}
	}

	return 0;
}
