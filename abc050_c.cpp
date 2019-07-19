#include<iostream>
#include<vector>

typedef long long ll;

using namespace std;

int main() {
	ll N;
	cin >> N;
	vector<ll>A(N);
	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		A[x]++;
	}
	A[0]++;
	ll ans = 1;
	for (int i = 1-N%2; i < N; i+=2)
	{
		if (A[i] != 2) {
			cout << 0 << endl;
			return 0;
		}
	}

	ll tmp = 1e9 + 7;
	for (int i = 0; i < N/2; i++)
	{
		ans = ans*2 % tmp;
	}

	cout << ans << endl;

	return 0;
}
