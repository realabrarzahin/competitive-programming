#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

int ways(int n) {
  if (n == 3)
    return 4;
  if (n == 2)
    return 3;
  if (n == 1)
    return 1;

  return ways(n - 1) + ways(n - 2) + ways(n - 3);
}

void solve() {

  int s, e;
  cin >> s >> e;

  int ans = ways(e - s);

  cout << ans << endl;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}
