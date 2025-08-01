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

  ll x = n;

  if (n <= 3) {
    cout << "NO" << endl;
    return;
  } else {
    cout << "YES" << endl;
  }

  if (n % 2) {

    for (ll i = 1; i <= (n - 5) / 2; i++) {

      cout << x << " - " << x - 1 << " = " << 1 << endl;
      cout << "1 * 1 = 1" << endl;

      x = x - 2;
    }

    cout << "5 * 3 = 15" << endl;
    cout << "4 * 2 = 8" << endl;
    cout << "15 + 8 = 23" << endl;
    cout << "23 + 1 = 24" << endl;
  } else {
    for (ll i = 1; i <= (n - 4) / 2; i++) {

      cout << x << " - " << x - 1 << " = " << 1 << endl;
      cout << "1 * 1 = 1" << endl;

      x = x - 2;
    }

    cout << "4 * 3 = 12" << endl;
    cout << "12 * 2 = 24" << endl;
    cout << "24 * 1 = 24" << endl;
  }
}

int main() {
  fastIO();

  int T = 1;

  while (T--)
    solve();

  return 0;
}
