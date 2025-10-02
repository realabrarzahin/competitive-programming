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

  vi a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int mask = 0; (mask < (1 << n) - 1); mask++) {

    long sum = 0;

    for (int i = 0; i < n; i++) {
      if (1 & (mask >> i))
        sum += a[i];
      else
        sum -= a[i];
    }

    if (sum % 360 == 0) {
      cout << "YES" << endl;
      return;
    }
  }

  cout << "NO" << endl;
  return;
}

int main() {
  fastIO();

  int T = 1;

  while (T--)
    solve();

  return 0;
}
