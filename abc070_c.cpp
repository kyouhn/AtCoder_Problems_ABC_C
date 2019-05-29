#include <iostream>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b){
    if(b == 0){
        return a;
    }
    return gcd(b,a % b);
}

ll lcm(ll a, ll b){
    ll g = gcd(a, b);
    return a / g * b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    ll ans = 1LL;

    for (int i = 0; i < N; i++) {
        ll T;
        cin >> T;
        ans = lcm(ans, T);
    }

    cout << ans << endl;

    return 0;
}