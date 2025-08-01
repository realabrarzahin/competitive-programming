#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using umll = unordered_map<int, int>;

void fastIO() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}
  



void solve() {
  
  ll sz = 1e18;
  
  ll pn[sz];

  for(ll i = 1; i <= sz; i++){
    for(ll j = i; j <= sz; j+=i){
      pn[j]++;
    }
  }

  for(auto x: pn) cout << x << endl;



  ll n;
  cin >> n;
  

  
}

int main() {
  fastIO();

  int T = 1;
  cin >> T;

  while (T--)
    solve();

  return 0;
}
