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

  string s;
  cin >> s;
  ll ans;

  vector<pair<int, int>> we(n);

  for (int i = 0; i < n; i++) {
    if (!i) {
      if (s[i] == 'W')
        we[0] = {1, 0};
      else
        we[0] = {0, 1};
    }

    else {
      if (s[i] == 'W')
        we[i] = {we[i - 1].ff + 1, we[i - 1].ss};
      else
        we[i] = {we[i - 1].ff, we[i - 1].ss + 1};
    }
  }


  for (int i = 0; i < n; i++) {

    ll count = 0;

    if (i && i != (n - 1)) {

        count = we[i - 1].ff + (we[n - 1].ss - we[i].ss);
    }
    else if(i == 0){
      if(s[i] == 'W') count = we[n - 1].ss;
      else count = we[n - 1].ss - 1;
    }
    else{

      if(s[i] == 'W') count = we[i].ff - 1;
      else count = we[i].ff;
     
    }

    if (i)
      ans = min(ans, count);
    else
      ans = count;
  }

  cout << ans << endl;
}

int main() {
  fastIO();
  int T;

  T = 1;

  while (T--)
    solve();
  return 0;
}
