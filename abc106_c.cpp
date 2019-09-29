#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string S;
	int K;
	cin >> S >> K;
	K--;
	for (int i = 0; i <= K; i++){
		if (S[i] != '1') {
			cout << S[i] << endl;
			return 0;
		}
	}
	cout << '1' << endl;

	return 0;
}
