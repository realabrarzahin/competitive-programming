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

  ll n, a, b;
  cin >> n >> a >> b;

  vll ar(n + 1);
  ar.push_back(0);

  vll ps(n + 1);
  ar.push_back(0);

  for (int i = 1; i <= n; i++) {
    cin >> ar[i];
    ps[i] = ps[i - 1] + ar[i];
  }

  // for(int i = 0; i < n + 1; i++){
  //   cout << ar[i] << " " << ps[i] << endl;
  // }

  ll mn = (a + b) * ar[n];

  for (int i = 0; i < n; i++) {
    ll ans = (a + b) * ar[i] + b * ((ps[n] - ps[i]) - ar[i] * (n - i));

    mn = min(ans, mn);
  }

  cout << mn << endl;
}

int main() {
  fastIO();
  int T;
  cin >> T; // Comment this line if single test case
  while (T--)
    solve();
  return 0;
}
