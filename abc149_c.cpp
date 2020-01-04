#include<iostream>

using namespace std;

bool isprime(int x) {
	if (x <= 1) {
		return false;
	}
	for (int i = 2; i * i <= x; i++){
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int x;
	cin >> x;
	int ans = x;
	while (!isprime(ans)) {
		ans++;
	}
	cout << ans << endl;

	return 0;
}