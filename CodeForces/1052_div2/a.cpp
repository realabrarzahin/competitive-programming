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
  int n;
  cin >> n;

  vi a(n);
  for(int i = 0; i < n; i++) cin >> a[i];
  
  map<int, int> b;
  for(int i = 0; i < n; i++) b[a[i]]++;
  

  vi c;
  for(auto&[k,v]:b){
    c.push_back(v);
  }
 
  int mx = 0;
  for(int i = 0; i < c.size(); i++){
    int x = 0;
    for(int j =0; j < c.size(); j++){
      if(c[i] <= c[j]) x+=c[i];
    }

    mx = max(mx,x);
  }

    cout << mx << endl;


  


  




}

int main() {
  fastIO();

  int T = 1;
  cin >> T;

  while (T--)
    solve();

  return 0;
}

