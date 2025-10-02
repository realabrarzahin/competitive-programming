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

  for (int mask = 0; mask <= ((1 << n) - 1); mask++) {
    for (int i = 0; i < n; i++) {
      cout << (1 & (mask >> i));
    }

    cout << endl;
  }
}

int main() {
  fastIO();

  int T = 1;
  cin >> T;

  while (T--)
    solve();

  return 0;
}
