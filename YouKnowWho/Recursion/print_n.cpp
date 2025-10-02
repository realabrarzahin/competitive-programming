#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void print_n(int x, int n) {
  if (x <= n) {
    cout << x << endl;
    print_n(x + 1, n);
  }
}

void solve() {

  int n;
  cin >> n;
  print_n(1, n);
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}
