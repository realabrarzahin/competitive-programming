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

  vector<pair<long, long>> ar(n);

  for (ll i = 0; i < n; i++) {

    ll x, y;
    cin >> x >> y;

    ar[i] = {x, y};
  }

  vector<pair<long, long>> ans;
       set<ll> no;


  for (ll i = 0; i < n && !no.count(i + 1); i++) {
    ll max = 0;

    ll a;
    ll b;

    for (ll j = i + 1; j < n && !no.count(j + 1); j++) {
      ll ms = abs(ar[i].ff - ar[j].ff) + abs(ar[i].ss - ar[j].ss);

      if (ms >= max) {
        a = i + 1;
        b = j + 1;

        max = ms;
      }
    }

    ans.push_back({a, b});
  

    no.insert(a);
    no.insert(b);
    
  


  }

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
