#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

i64 factorial(int n) {
  if (n == 1)
    return 1;

  if (n == 0)
    return 1;

  return n * factorial(n - 1);
}

void solve() {

  int n;
  cin >> n;

  i64 x = factorial(n);
  cout << x << endl;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}
