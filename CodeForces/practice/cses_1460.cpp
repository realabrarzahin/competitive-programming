#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

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
    for(auto& x : a) cin >> x;
    
    vector<pii> arr(n);
    
    for( int i = 0; i < n; i++){
        arr[i].ff = a[i];
        arr[i].ss = i;
    }

    sort(arr.begin(), arr.end());
    
    int l = 0, r = n - 1;
    int af = 1;

    while(l < r){
        

        if(arr[l].ff + arr[r].ff > x) r--;
        else if(arr[l].ff + arr[r].ff < x) l++;
        else{
            cout << arr[l].ss + 1 << " " << arr[r].ss + 1;
            cout << endl;
            af = 0;
            break;
        }
    }

    if(af) cout << "IMPOSSIBLE" << endl;
    
}

int main() {
    fastIO();
    int T = 1; cin >> T;               // Comment this line if single test case
    while (T--) solve();
    return 0;
}



