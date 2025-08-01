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

ll fb(ll la, ll lb, ll lc, ll ld) {
  if ((la | lb) - (la & lc) == ld)
    return true;
  else
    return false;
}

void solve() {
  ll a = 0, b, c, d;
  cin >> b >> c >> d;

  for (ll i = 60; i >= 0; i--) {
    ll lb = (b >> i);
    ll lc = (c >> i);
    ll ld = (d >> i);
    ll la;

    if (fb(0, lb, lc, ld)) {
      la = 0;
    } else if (fb(1, lb, lc, ld)) {
      la = 1;
    } else {
      cout << -1 << endl;
      return;
    }

    a += (la << (i));
  }
}

int main() {
  fastIO();

  int T = 1;
  cin >> T;

  while (T--)
    solve();

  return 0;
}
