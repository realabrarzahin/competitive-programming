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
  int n, k;
  cin >> n >> k;

  vi a(n);
  for (auto &x : a)
    cin >> x;

  vi q(k);
  for (auto &x : q)
    cin >> x;

  sort(a.rbegin(), a.rend());

  ll count = 0;

  for (int i = 0; i < k; i++) {
    ll b = q[i];

    for (ll j = 0; j < n; j++) {
      if (b >= a[j]) {

        b -= a[j];
        count++;
      }

      if (b == 0) {
        cout << count << endl;

        count = 0;
        break;
      }

      if (b != 0 && j == n - 1) {
        cout << -1 << endl;
        count = 0;
        break;
      }
    }
  }
}

int main() {
  fastIO();
  int T = 1;
  while (T--)
    solve();
  return 0;
}
