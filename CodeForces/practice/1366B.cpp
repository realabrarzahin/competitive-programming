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
  ll n, x, m;
  cin >> n >> x >> m;

  bool of = false;

  pair<ll, ll> ans = {0, 0};

  for (ll i = 0; i < m; i++) {
    ll l, r;
    cin >> l >> r;

    if (x >= l && x <= r) {
      if (!of) {
        of = true;
        ans = {l, r};
      } else {
        ans.first = min(ans.first, l);
        ans.second = max(ans.second, r);
      }
    }

    if (of) {
      if ((l <= ans.second && l >= ans.first) ||
          (r <= ans.second && r >= ans.first)) {
        ans.first = min(ans.first, l);
        ans.second = max(ans.second, r);
      }
    }
  }

    cout << ans.second - ans.first + 1 << endl;
}

int main() {
  fastIO();

  int T = 1;
  cin >> T; // Comment this line if single test case

  while (T--)
    solve();

  return 0;
}
