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
  
  int n, m;
  cin >> n >> m;
  
  
  vector<int> freq(m);
  vector<vector<int>> a(n);
  

  for(int i = 0; i < n; i++){
    int l; cin >> l;
    a[i].resize(l);

    for(int j = 0; j < l; j++){
      cin >> a[i][j];
  
      a[i][j]--;
      freq[a[i][j]]++;
    }
  }

  if(count(freq.begin(), freq.end(), 0)){
    cout << "NO" << endl;
    return;
  }
  
  int ans = 1;
  for(int i = 0; i < n; i++){
    int ok = 1;
    for(int j = 0; j < a[i].size(); j++){
      if(freq[a[i][j]] == 1){
        ok = 0;
      }
    }
    ans+=ok;

    if(ans >= 3){
      cout << "YES" << endl;
      return;
    }
  }

  cout << "NO" << endl;
  return;



}

int main() {
  fastIO();

  int T = 1;
  cin >> T;

  while (T--)
    solve();

  return 0;
}

