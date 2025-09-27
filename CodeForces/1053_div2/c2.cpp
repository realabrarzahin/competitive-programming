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

  ll asz = 2 * n;

  vll a(asz);

  for (ll i = 0; i < asz; i++) {
    cin >> a[i];
  }

  ll sum = 0;
  for (ll i = 0; i < asz - 1; i += 2) {
    sum += (a[i + 1] - a[i]);
  }
  sum = -sum;

  vll mxmn(n, 0);
  for (ll i = 1; i < n; i++) {
    mxmn[i] = a[asz - i] - a[i - 1];
  }

  vll sma(n);
  sma[0] = -sum;
  for (ll i = 1; i < n; i++) {
    sma[i] = -(sma[i - 1]) + mxmn[i];
  }

  for (int i = 1; i < n; i++) {
    mxmn[i] = mxmn[i - 1] + mxmn[i];
  }

  for (int i = 0; i < n; i++)
    cout << mxmn[i] + sma[i] << " ";
  cout << endl;
}

int main() {
  fastIO();

  int T = 1;
  cin >> T;

  while (T--)
    solve();

  return 0;
}
