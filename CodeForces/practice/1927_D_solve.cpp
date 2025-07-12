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

void solve(){
    int n; cin >> n;
    
    vi ei(n);
    int f = -1;
    int pv = -1;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        
        if(x != pv){
            if(i) f = i;
            else f = -1;

            pv = x;
            ei[i] = f;
        }
        else ei[i] = f;
    }

    // for(auto x: ei){
    //     cout << x << " ";
    // }
    //
    // cout << endl;
    
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        l--; r--;

        if(ei[r] > l){
            cout << ei[r] << " " << r+1 << endl;
        }
        else cout << "-1 -1" << endl;
    }
    cout << endl;
}

int main() {
    fastIO();
    int T; cin >> T;               // Comment this line if single test case
    while (T--) solve();
    return 0;
}



