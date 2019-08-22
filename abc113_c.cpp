#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<string>
#include<utility>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N, M;
	cin >> N >> M;
	vector<pair<pair<int, int>, int>>A(M);

	for (int i = 0; i < M; i++) {
		int P, Y;
		cin >> P >> Y;
		A[i] = make_pair(make_pair(P, Y), i);
	}

	sort(A.begin(), A.end());
	vector<pair<int, int>> ans(M);
	int cnt = 1;

	for (int i = 0; i < M; i++) {
		int P = A[i].first.first;
		int ID = A[i].second;
		if (i >= 1 && P == A[i - 1].first.first) {
			cnt++;
		}
		else {
			cnt = 1;
		}
		ans[ID] = make_pair(P, cnt);
	}

	for (int i = 0; i < M; i++){
		cout << setw(6) << setfill('0') << ans[i].first;
		cout << setw(6) << setfill('0') << ans[i].second << endl;
	}


	return 0;
}
