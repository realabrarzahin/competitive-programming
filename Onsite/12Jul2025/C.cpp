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

  string s, t;
  cin >> s;
  cin >> t;

  int n2 = 3;

  transform(t.begin(), t.end(), t.begin(), ::tolower);
  if (t[2] == 'x') {
    n2--;
    t.pop_back();
  }

  ll n1 = s.size();

  for (ll i = 0; i < n2; i++) {
    for (ll j = 0; j < n1; j++) {
      if (s[j] == t[i]) {
        s[j] = 'A';
        break;
      } else if (j == n1 - 1) {
        cout << "No" << endl;
        return;
      }
      else{
        s[j] = 'A';
      }
    }
  }

  cout << "Yes" << endl;

  return;
}

int main() {
  fastIO();
  int T = 1;
  while (T--)
    solve();
  return 0;
}

