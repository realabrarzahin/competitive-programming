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

  ll n, c;
  cin >> n >> c;

  vector<ll> a;
  ll coin = 0;

  for (ll i = 0; i < n; i++) {

    ll y;
    cin >> y;

    if (y > c)
      coin++;
    else
      a.push_back(y);
  }

  while (!a.empty()) {
    sort(a.begin(), a.end());

    if (a.back() > c) {
      coin++;
      a.pop_back();
    }

    else {
      a.pop_back();
      for (int i = 0; i < a.size(); i++) {
        if (a[i] <= c)
          a[i] *= 2;
      }
    }
  }

  cout << coin << endl;
}

int main() {
  fastIO();

  int T = 1;
  cin >> T; // Comment this line if single test case

  while (T--)
    solve();

  return 0;
}
