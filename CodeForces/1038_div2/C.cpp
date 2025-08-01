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

const int MOD = 1e9 + 7;  // Common modulus
const int INF = 1e9 + 5;  // Integer infinity
const ll LINF = 1e18 + 5; // Long long infinity
const int N = 2e5 + 5;    // Adjust according to problem size

void fastIO() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

void solve() {
  ll n;
  cin >> n;

  vector<pair<long, long>> xc(n);
  vector<pair<long, long>> yc(n);

  for (ll i = 0; i < n; i++) {
    ll x, y;
    cin >> x >> y;

    xc[i] = {x, i};
    yc[i] = {y, i};
  }

  sort(xc.begin(), xc.end());
  sort(yc.begin(), yc.end());
  
  
  
  vll q1, q2, q3, q4;

  for(ll i = 0; i < n; i++){
      if((xc[i].ss > (n / 2)) && yc[i].ss > (n / 2)) q1.push_back({xc[i].ss + 1
    });

  }



}

int main() {
  fastIO();
  int T;
  cin >> T; // Comment this line if single test case
  while (T--)
    solve();
  return 0;
}
