#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using umll = unordered_map<int, int>;

void fastIO() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

ll fk(ll n) { return floor(n - (int)sqrtl(n)); }

void solve() {

  ll k;
  cin >> k;

  ll l = -1;
  ll r = 2e18;

  while (r - l > 1) {
    ll m = (r + l) >> 1;

    if (fk(m) >= k) {
      r = m;
    } else {
      l = m;
    }
  }

  cout << r << endl;
}

int main() {
  fastIO();

  int T = 1;
  cin >> T;

  while (T--)
    solve();

  return 0;
}
