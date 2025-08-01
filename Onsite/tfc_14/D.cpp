#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using umll = unordered_map<int, int>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second
#define sz(x) (int)(x).size()

const int MOD = 1e9 + 7;  // Common modulus
const int INF = 1e9 + 5;  // Integer infinity
const ll LINF = 1e18 + 5; // Long long infinity
const int N = 2e5 + 5;    // Adjust according to problem size

void fastIO() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

void solve() {
  int n;
  cin >> n;

  vll a(n);
  ll sum = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }

  vll b(n);

  for (int i = 0; i < n; i++) {
    b[i] = sum - a[i];
  }

  set<ll> c;

  vector<pll> r(n), s(n);

  for (int i = 0; i < n; i++) {
    r[i] = {a[i], i};
    s[i] = {b[i], i};
  }

  sort(r.begin(), r.end());

  vll r1(n);
  vll r2(n);

  for (int i = 0; i < n; i++) {
    r1[i] = r[i].ff;
    r2[i] = r[i].ss;
  }

  for (ll i = 0; i < n; i++) {

    if (s[i].ff % 2)
      continue;
    else {
      auto it = binary_search(r1.begin(), r1.end(), s[i].ff / 2);

      c.insert(it);
    }
  }

  cout << c.size() << endl;

  for (auto x : c)
    cout << x << " ";
}

int main() {
  fastIO();
  int T = 1;
  while (T--)
    solve();
  return 0;
}
