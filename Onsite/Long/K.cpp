#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void solve() {
  long x_max, y_max;
  long k;
  long x_i, y_i;
  long x_f, y_f;

  cin >> x_max >> y_max;
  cin >> k;
  cin >> x_i >> y_i;
  cin >> x_f >> y_f;

  int cnt = 0;

  if ((x_f - x_i) % k == 0)
    ;
  else if (((x_max - x_f) % k == 0) || ((0 - x_f) % k == 0))
    cnt++;
  else {
    cout << -1 << endl;
    return;
  }

  if ((y_f - y_i) % k == 0)
    ;
  else if (((y_max - y_f) % k == 0) || ((0 - y_f) % k == 0))
    cnt++;
  else {
    cout << -1 << endl;
    return;
  }

  cout << cnt << endl;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
    solve();

  return 0;
}
