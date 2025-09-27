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

  ll asz = 2 * n;

  vll a(asz);

  for (ll i = 0; i < 2 * n; i++) {
    cin >> a[i];
  }

  ll sum = 0;

  for (ll k = 1; k <= n; k++) {

    for (ll i = k - 1; i < (asz - k); i += 2) {
      sum += (a[i + 1] - a[i]);
    }

    for (ll j = 1; j < k; j++) {
      sum += (a[2 * n - (j - 1) - 1] - a[j - 1]);
    }

    cout << sum << " ";

    sum = 0;
  }

  cout << endl;
}

int main() {
  fastIO();

  int T = 1;
  cin >> T;

  while (T--)
    solve();

  return 0;
}
