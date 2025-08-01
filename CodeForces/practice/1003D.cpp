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

ll min(ll a, ll b) {
  if (a <= b)
    return a;
  else
    return b;
}

void solve() {
  ll n, q;
  cin >> n >> q;

  vll cnt(31, 0);
  for (ll i = 0; i < n; i++) {
    ll x;
    cin >> x;
    cnt[__builtin_ctz(x)]++;
  }

  while (q--) {
    ll b;
    cin >> b;

    ll ans = 0;

    for (int i = 31; i >= 0 && b > 0; i--) {
      ll x = b >> i;
      ll need = min(x, cnt[i]);

      ans += need;
      b -= need * (1 << i);
    }

    if (b == 0)
      cout << ans << endl;
    else
      cout << -1 << endl;
  }
}

int main() {
  fastIO();

  int T = 1;

  while (T--)
    solve();

  return 0;
}
