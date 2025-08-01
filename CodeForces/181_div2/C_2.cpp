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

ll val(ll n) {

  ll ans = 0;

  for (int a2 = 0; a2 < 2; a2++) {
    for (int a3 = 0; a3 < 2; a3++) {
      for (int a5 = 0; a5 < 2; a5++) {
        for (int a7 = 0; a7 < 2; a7++) {

          ll ct = 0;
          ll div = 1;

          if (a2) {
            ct++;
            div *= 2;
          }
          if (a3) {
            ct++;
            div *= 3;
          }
          if (a5) {
            ct++;
            div *= 5;
          }
          if (a7) {
            ct++;
            div *= 7;
          }

          if (ct % 2)
            ans -= n / div;
          else
            ans += n / div;
        }
      }
    }
  }

  return ans;
}

void solve() {

  ll l, r;
  cin >> l >> r;

  cout << val(r) - val(l - 1) << endl;
}

int main() {
  fastIO();

  int T = 1;
  cin >> T; // Comment this line if single test case

  while (T--)
    solve();

  return 0;
}
