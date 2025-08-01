#include <bits/stdc++.h>

using namespace std;

int main() {

  long long t;
  cin >> t;

  while (t--) {

    long long n;
    cin >> n;

    long long sq = sqrt(n);
    if (sq == 0) {
      if (n == 0)
        cout << 0 << " " << 0 << endl;
      else
        cout << -1 << endl;
    } else if (sqrt(n) == n / sq) {
      cout << 0 << " " << sq << endl;
    } else {
      cout << -1 << endl;
    }
  }

  return 0;
}
