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

  vi v;
  vi c;

  int t = 0;

  for (int i = 0; i < n; i++) {

    ll x;
    cin >> x;

    if (!i) {
      v.push_back(x);
      c.push_back(1);
    } else if (v[t] == x) {
      c[t]++;
    } else {
      v.push_back(x);
      c.push_back(1);
      t++;
    }
  }

  for(int i = 0; i <= t; i++) cout << "( " << v[i] << ", " << c[i] << ")" << endl;
}

int main() {
  fastIO();
  int T;
  cin >> T; // Comment this line if single test case
  while (T--)
    solve();
  return 0;
}
