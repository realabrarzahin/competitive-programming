#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

#define INF (int)1e10

int main() {
  ll t;
  cin >> t;

  while (t--) {

    ll k;
    cin >> k;

    ll count = -1;
    ll i = 2;

    while (true) {

      if (sqrt(i) != (i / sqrt(i))) {
        count++;
      }

      if (count == k)
        break;

      i++;
    }

    cout << i << endl;
  }

  return 0;
}
