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

  unsigned int n;
  cin >> n;

  unsigned int rev = 0;

  int k = 32;
  int i = 0;

  while (k--) {

    rev = rev + ((1 & (n >> i)) << k);
    i++;
  }

  cout << rev << endl;
}

int main() {
  fastIO();

  int T = 1;
  cin >> T;

  while (T--)
    solve();

  return 0;
}
