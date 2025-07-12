#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using umll = unordered_map<int, int>;

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
    int n;
    cin >> n;

    vi a;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }

    if(n % 2) a.push_back(0);

    int np = (n % 2) ? (n + 1) : n;

    vi d;

    for(int i = 0; i < np; i+=2){
        d.pb(a[i] - a[i + 1]);
    }

    vi ps(np/2);
    ps[0] = d[0];

    for(int i = 1; i < np/2; i++){
        ps[i] = d[i] + ps[i - 1]; 
    }

    for(auto x: d) cout << x << " ";
    cout << endl;

    for(auto x: ps) cout << x << " ";
    cout << endl;






}

int main() {
    fastIO();
    int T; cin >> T;               // Comment this line if single test case
    while (T--) solve();
    return 0;
}



