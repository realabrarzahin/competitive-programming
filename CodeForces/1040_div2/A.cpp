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

  int ex = 0;

  ll sum = 0;

  for (int i = 0; i < n; i++) {
    ll y;
    cin >> y;

    if (y == 0)
      ex++;

    sum += y;
  }

  cout << sum + ex << endl;
}

int main() {
  fastIO();

  int T = 1;
  cin >> T;

  while (T--)
    solve();

  return 0;
}
