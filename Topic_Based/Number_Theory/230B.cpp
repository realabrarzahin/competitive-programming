#include <bits/stdc++.h>
#include <cstring>

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

const ll TMP = 1e6;

void fastIO() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

vll pff() {
  vll pf(TMP, 0);

  for (ll x = 2; x <= TMP; x++) {
    if (pf[x])
      continue;
    else {
      for (ll u = 2 * x; u <= TMP; u += x) {
        pf[u] = x;
      }
    }
  }

  return pf;
}

int main() {

  fastIO();

  vll pf = pff();

  ll n;
  cin >> n;

  for (ll i = 0; i < n; i++) {
    ll x;
    cin >> x;

    for (ll j = 2; j <= TMP; j++)
      if (!pf[j] && (j * j == x)) {
        cout << "YES" << endl;
        break;
      }

      else if (j * j > x) {
        cout << "NO" << endl;
        break;
      }
  }

  return 0;
}
