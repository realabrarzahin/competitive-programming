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
  ll n;
  cin >> n;

  vector<pll> a;

  while (n--) {
    ll k;
    cin >> k;

    vll ki(k);
    for (ll i = 0; i < k; i++) {
      cin >> ki[i];
      ki[i] = ki[i] - (i);
    }

    sort(ki.rbegin(), ki.rend());

    a.push_back({ki[0] + 1, ki[0] + k + 1});
  }

  sort(a.begin(), a.end());

  ll ans = a[0].first;

  for (int i = 0; i < a.size(); i++) {
    if (i) {
      if (a[i - 1].second < a[i].first) {
        ans = a[i].first;
      }
    }
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
