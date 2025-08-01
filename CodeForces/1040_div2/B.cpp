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

  ll n, s;
  cin >> n >> s;

  ll sum = 0;

  ll zero = 0;
  ll one = 0;
  ll two = 0;

  vll a(n);

  for (ll i = 0; i < n; i++) {
    ll x;
    cin >> x;
    sum += x;

    a[i] = x;

    if (x == 0)
      zero++;
    else if (x == 1)
      one++;
    else
      two++;
  }

  if (s > sum) {

    if (s - sum == 1) {

      for (ll i = 0; i < zero; i++)
        cout << 0 << " ";
      for (ll i = 0; i < two; i++)
        cout << 2 << " ";
      for (ll i = 0; i < one; i++)
        cout << 1 << " ";

      cout << endl;
    } else {
      cout << -1 << endl;
    }
  } else if (s < sum) {

    for (auto &x : a)
      cout << x << " ";
    cout << endl;

  } else {
    cout << -1 << endl;
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
