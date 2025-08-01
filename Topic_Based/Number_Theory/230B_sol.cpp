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

const ll MAX = 1e6;

void fastIO() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

void solve() {

  vector<int> pf(MAX, 0);
  unordered_set<ll> spf;

  for (ll i = 2; i <= MAX; i++) {
    if (pf[i]) {
      continue;
    } else {

      spf.insert(i * i);

      for (ll u = 2 * i; u <= MAX; u += i)
        pf[u] = 1;
    }
  }

  ll n;
  cin >> n;

  for (ll i = 0; i < n; i++) {
    ll x;
    cin >> x;

    spf.count(x) ? cout << "YES" << endl :  cout << "NO" << endl;
  }
}

int main() {
  fastIO();
  solve();
  return 0;
}
