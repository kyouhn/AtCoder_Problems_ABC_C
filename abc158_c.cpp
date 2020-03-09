#include"bits/stdc++.h"
 
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int A, B;
	cin >> A >> B;
	for (int i = 0; i < 1010; i++){
		if (floor(i * 0.08) == A && floor(i * 0.1) == B) {
			cout << i << endl;
			return 0;
		}
	}
 
	cout << -1 << endl;
 
	return 0;
}