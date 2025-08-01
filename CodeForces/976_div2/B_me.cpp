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

void solve() {

  ll k;
  cin >> k;

  ll l = -1;
  ll r = 2e18;
  ll m;
  ll fm;

  while (r - l > 1) {
    m = (r + l) >> 1;

    fm = m - floor(sqrtl(m));

    if (fm >= k)
      r = m;
    else
      l = m;
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
