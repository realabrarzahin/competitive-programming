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

  ll a, b, k;
  cin >> a >> b >> k;

  if (a <= k && b <= k) {
    cout << 1 << endl;
    return;
  }

  // for (ll i = 2; i <= sqrt(min(a, b)); i++) {
  //   if (!(a % i) && !(b % i)) {
  //     if (((a / i) <= k) && ((b / i) <= k)) {
  //       cout << 1 << endl;
  //       return;
  //     }
  //   }
  // }

  ll gd = gcd(a, b);
  if ((a / gd <= k) && (b / gd <= k)) {
    cout << 1 << endl;
    return;
  } else {
    cout << 2 << endl;
    return;
  }

  cout << 2 << endl;
}

int main() {
  fastIO();
  int T;
  cin >> T; // Comment this line if single test case
  while (T--)
    solve();
  return 0;
}
