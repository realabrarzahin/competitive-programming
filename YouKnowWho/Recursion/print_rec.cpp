#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void print_rec(int n) {
  if (n > 0) {
    cout << "I love Recursion" << endl;
    print_rec(n - 1);
  }
}

void solve() {
  int n;
  cin >> n;
  print_rec(n);
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;

  while (t--)
    solve();

  return 0;
}
