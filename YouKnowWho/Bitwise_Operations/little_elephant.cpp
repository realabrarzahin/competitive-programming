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
  string bitstr;
  cin >> bitstr;

  int strsz = bitstr.size();

  int flag = -1;
  string ans = "";

  for (int i = 0; i < strsz; i++) {
    if (bitstr[i] == '0') {
      flag = i;
      break;
    }
  }

  if (flag == -1) {
    strsz--;
    while (strsz--) {
      ans += '1';
    }
  } else {
    for (int i = 0; i < strsz; i++) {
      if (i != flag) {
        ans += bitstr[i];
      }
    }
  }

  cout << ans << endl;
}

int main() {
  fastIO();

  int T = 1;

  while (T--)
    solve();

  return 0;
}
