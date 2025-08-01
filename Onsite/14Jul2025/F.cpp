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

  string s;
  cin >> s;

  ll a, b;
  cin >> a >> b;

  ll t = 0, f = 0;

  ll sz = s.size();

  for (ll i = 0; i < sz; i++) {
    if (s[i] == 'F')
      f++;
    else
      t++;
  }

  ll d = abs(a) + abs(b);

  if (t == 0 && b == 0 && a >= 0) {
    if (f == d)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }

  else if (t == 1 && a >= 0) {
    if (f == d) {
      cout << "Yes" << endl;
      return;
    } else {
      cout << "No" << endl;
      return;
    }
  }

  else if (t == 1 && a < 0) {
    cout << "No" << endl;
    return;
  } else {
    if ((f - d) % 2) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  }
}

int main() {
  fastIO();
  int T;
  T = 1; // Comment this line if single test case
  while (T--)
    solve();
  return 0;
}
