#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using umii = unordered_map<int, int>;
using umll = unordered_map<ll, ll>;

void fastIO() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

void solve() {
  ll n;
  cin >> n;

  vll a(n);
  umll b;
  ll sum = 0;

  for (ll i = 0; i < n; i++) {
    cin >> a[i];

    b[a[i]]++;
    sum += a[i];
  }

  vll ans;

  for (ll i = 0; i < n; i++) {
    sum -= a[i];
    b[a[i]]--;

    if (sum % 2 == 0) {
      if (b[sum / 2])
        ans.push_back(i + 1);
    }

    b[a[i]]++;
    sum += a[i];
  }

  if (!ans.size()) {
    cout << 0 << endl;
    return;
  }

  cout << ans.size() << endl;
  for (auto x : ans)
    cout << x << " ";

  cout << endl;
}

int main() {
  fastIO();

  int T = 1;

  while (T--)
    solve();

  return 0;
}
