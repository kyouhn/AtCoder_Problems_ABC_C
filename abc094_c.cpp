#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	cin >> N;
	vector<int>X(N),Y(N);
	for (int i = 0; i < N; i++){
		cin >> X[i];
		Y[i] = X[i];
	}
	sort(Y.begin(), Y.end());

	
	for (int i = 0; i < N; i++){
		if (X[i] < Y[N / 2]) {
			cout << Y[N / 2] << endl;
		}
		else if (X[i] >= Y[N / 2]) {
			cout << Y[N / 2 - 1] << endl;
		}
	}

	return 0;
}