#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using umii = unordered_map<int, int>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second
#define sz(x) (int)(x).size()

const int MOD  = 1e9 + 7;        // Common modulus
const int INF  = 1e9 + 5;        // Integer infinity
const ll LINF  = 1e18 + 5;       // Long long infinity
const int N    = 2e5 + 5;        // Adjust according to problem size

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int n, x;
    cin >> n >> x;

    vi a(n);
    umii cx;

    for(int i = 0; i < n; i++){
        cin >> a[i];

        int cm = x - a[i];

        if(cx.count(cm)){
            cout << cx[cm] + 1 << " " << i + 1 << "\n";
            return;
        }

        cx[a[i]] = i;
    }

    cout << "IMPOSSIBLE" << "\n";
    return;

}

int main() {
    fastIO();
    int T = 1;
    while (T--) solve();
    return 0;
}



