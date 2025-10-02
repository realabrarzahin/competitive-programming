#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

i64 f(int n) {
  if (n == 1)
    return 1;
  if (n == 0)
    return 0;

  return f(n - 1) + f(n - 2);
}

void solve() {
  int n;
  cin >> n;
  i64 x = f(n - 1);

  cout << x << endl;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}
