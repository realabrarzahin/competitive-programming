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
  long n;
  cin >> n;

  vector<long> a(n);
  for (long i = 0; i < n; i++) {
    cin >> a[i];
  }

  long ans = 20000000000;

  for (long mask = 1; mask < (1L << n); mask++) {

    long sum = 0;

    for (long i = 0; i < (n); i++) {
      if ((mask >> i) & 1)
        sum += a[i];
      else
        sum -= a[i];
    }

    sum = abs(sum);
    ans = min(ans, sum);
  }

  cout << ans << endl;
}

int main() {
  fastIO();

  int T = 1;

  while (T--)
    solve();

  return 0;
}
