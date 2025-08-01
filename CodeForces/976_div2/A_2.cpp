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

  if (k == 1) {
    cout << n << endl;
    return;
  }

  while (n) {
    if (n % k)
      count += (n % k);

    n = n / k;
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
