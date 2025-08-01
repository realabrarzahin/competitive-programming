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

  ll n;
  cin >> n;

  vll a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  ll count = 0;
  vector<pair<int, int>> ans;

  if (n % 2 == 0) {
    ll x;

    ans.push_back({1, n});
    count++;

    for (int i = 0; i < n; i++) {

      if (!i)
        x = a[i];
      else
        x = x ^ a[i];
    }

    if (x) {
      ans.push_back({1, n});
      count++;
    }

  } else {

    ll x;

    ans.push_back({1, n - 1});
    count++;

    for (int i = 0; i < n - 1; i++) {

      if (!i)
        x = a[i];
      else
        x = x ^ a[i];
    }

    if (x) {
      ans.push_back({1, n - 1});
      count++;
    }

    ans.push_back({n, n});
    count++;
  }

  cout << count << endl;

  for (auto x : ans)
    cout << x.ff << " " << x.ss << endl;

}

int main() {
  fastIO();
  int T;
  cin >> T; // Comment this line if single test case
  while (T--)
    solve();
  return 0;
}
