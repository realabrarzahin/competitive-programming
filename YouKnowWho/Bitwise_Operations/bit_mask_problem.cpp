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
  long n, l, r, x;
  cin >> n >> l >> r >> x;

  vector<long> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  long cnt;

  for (long mask = 1; mask < (1 << n); mask++) {

    if (mask & (mask - 1L)) {
      long sum = 0;
      long mx = 0;
      long mn = 1000000001;

      for (int i = 0; i < n; i++) {
        if (1 & (mask >> i)) {
          sum += a[i];
          mx = max(mx, a[i]);
          mn = min(mn, a[i]);
        }
      }

      if ((sum <= r && sum >= l) && (mx - mn >= x))
        cnt++;
    }
  }

  cout << cnt;
}

int main() {
  fastIO();

  int T = 1;

  while (T--)
    solve();

  return 0;
}
