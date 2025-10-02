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

  long n, k;
  cin >> n >> k;

  vector<pair<long, long>> a(n);
  for (long i = 0; i < n; i++)
    cin >> a[i].first >> a[i].second;

  long mxv = 0;

  for (long mask = 0; mask < (1L << n); mask++) {

    long w = 0;
    long v = 0;

    for (long i = 0; i < n; i++) {
      if ((mask >> i) & 1) {
        w += a[i].first;
        v += a[i].second;
      }
    }

    if (w <= k)
      mxv = max(mxv, v);
  }

  cout << mxv << endl;
}

int main() {
  fastIO();

  int T = 1;

  while (T--)
    solve();

  return 0;
}
