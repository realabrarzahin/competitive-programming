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

  vll a(n), au(n);

  for (ll i = 0; i < n; i++) {

    cin >> a[i];

    au[i] = a[i];
  }

  sort(au.begin(), au.end());

  for (ll i = 0; i < n; i++) {

    if (a[i] < au[n / 2])
      cout << au[(n + 1) / 2] << endl;
    else
      cout << au[(n - 1) / 2] << endl;
  }
}

int main() {
  fastIO();
  int T = 1;
  while (T--)
    solve();
  return 0;
}
