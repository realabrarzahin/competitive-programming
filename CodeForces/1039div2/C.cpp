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

  vll a(n);

  ll mn;

  bool ans = true;

  for (ll i = 0; i < n; i++) {

    ll y;
    cin >> y;

    if (!i)
      mn = y;
    else {

      if (y >= mn * 2)
        ans = false;

      mn = min(mn, y);
    }
  }

  if (ans)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}

int main() {
  fastIO();

  int T = 1;
  cin >> T;

  while (T--)
    solve();

  return 0;
}
