#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void solve() {
  i64 n;
  cin >> n;

  vector<i64> fac(15);
  fac[0] = 1;

  for (int i = 1; i < 15; i++) {
    fac[i] = fac[i - 1] * (i + 1);
  }

  int ans = 100;

  for (int mask = 0; mask < (1 << 15); mask++) {
    i64 m = n;
    for (int i = 0; i < 15; i++) {
      if ((mask >> i) & 1)
        m -= fac[i];
    }

    if (m >= 0) {
      ans = min(ans, __builtin_popcount(mask) + __builtin_popcountll(m));
    }
  }

  cout << ans << endl;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;

  while (t--)
    solve();

  return 0;
}
