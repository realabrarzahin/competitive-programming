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
  string s;
  cin >> s;

  long glb_sum = 0;
  long strln = 0;

  string x = s;
  while (x.size()) {
    strln++;
    x.pop_back();
  }

  long g_sum = 0;

  for (long mask = 0; mask < (1L << (strln - 1)); mask++) {

    string tmp;

    for (long k = 0; k < (strln); k++) {

      tmp.push_back(s[k]);

      if ((mask >> k) & 1) {
        tmp.push_back('+');
      }
    }

    long sum = 0;
    for (long i = 0; i < tmp.size(); i++) {

      if (tmp[i] == '+') {
        g_sum += sum;
        sum = 0;
      } else {
        sum *= 10;
        sum += (tmp[i] - '0');
      }

      if (i == (tmp.size() - 1)) {
        g_sum += sum;
      }
    }
  }

  cout << g_sum << endl;
}

int main() {
  fastIO();

  int T = 1;

  while (T--)
    solve();

  return 0;
}
