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
  int n;
  cin >> n;

  vector<pll> a;

  while (n--) {
    ll k;
    cin >> k;

    vll c(k);
    for (ll i = 0; i < k; i++) {
      cin >> c[i];
      c[i] = c[i] - i + 1;
    }

    sort(c.rbegin(), c.rend());

    a.push_back({c[0], k});
  }

  sort(a.begin(), a.end());

  ll ans = a[0].first;

  for (ll i = 1; i < n; i++) {
    if (a[i].first > (a[i - 1].first + a[i - 1].second))
      ans = a[i].first;
  }

  cout << ans << endl;
}

int main() {
  fastIO();

  int T = 1;
  cin >> T; // Comment this line if single test case

  while (T--)
    solve();

  return 0;
}
