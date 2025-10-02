#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void print(int n) {
  cout << n << endl;
  print(n - 1);
}

void solve() {

  int n;
  cin >> n;
  print(n);
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}
