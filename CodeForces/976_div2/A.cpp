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

  ll n, k;
  cin >> n >> k;

  ll count = 0;

  while (n) {

    if (n < k || k == 1) {
      count += n;
      break;
    }

    if (n == k) {
      count++;
      break;
    }

    ll v = k;
    while (true) {
      if (v * k <= n)
        v *= k;
      else
        break;
    }

    n = n - v;
    count++;
  }

  cout << count << endl;
}

int main() {
  fastIO();

  int T = 1;
  cin >> T;

  while (T--)
    solve();

  return 0;
}
