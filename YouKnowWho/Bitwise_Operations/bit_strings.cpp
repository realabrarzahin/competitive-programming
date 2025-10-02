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

  long M = 1000000007;
  long ans = 1;
  long base = 2 % M;

  while (n) {
    if (1 & (n)) {
      ans = (ans * base) % M;
    }

    base = (base * base) % M;

    n >>= 1;
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
