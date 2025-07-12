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
    int n; cin >> n;
    vi a(n); for(auto& x: a) cin >> x;

    int q; cin >> q;
    while(q--){
    
        int l, r; cin >> l >> r;
    
        vector<pii> x(r - l + 1);
        for(int i = 0; i < (r - l + 1); i++){
            x[i].ff = a[i + l - 1];
            x[i].ss = i + l;
        }
        
        sort(all(x));

        // for(auto& a: x) cout << "[ " << a.ff << " " << a.ss << " ]" << endl; 
        
        // cout << x[r - l].ff << " jkdfjkdjf" ;

        if(x[0].ff - x[r - l].ff){
            cout << x[0].ss << " " << x[r - l].ss << endl;
        }
        else cout << "-1 -1" << endl;


    }

    
}

int main() {
    fastIO();
    int T; cin >> T;               // Comment this line if single test case
    while (T--) solve();
    return 0;
}



