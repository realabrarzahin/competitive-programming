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

  ll ys = 0;
  vll a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    ys += a[i];
  }

  vll ps(n);
  for (int i = 0; i < n; i++) {
    if (!i)
      ps[i] = a[i];
    else
      ps[i] = a[i] + ps[i - 1];
  }

  if (ps[n - 2] > ys || (ps[n - 1] - ps[0] > ys)) {
    cout << "NO" << endl;
    return;
  }

  for (int i = 0; i < n - 1; i++) {
    if (ps[i] <= 0 || ps[i] >= ys) {
      cout << "NO" << endl;
      return;
    }
  }

  cout << "YES" << endl;
  return;
}

int main() {
  fastIO();

  int T = 1;
  cin >> T; // Comment this line if single test case

  while (T--)
    solve();

  return 0;
}
