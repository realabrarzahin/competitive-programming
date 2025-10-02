#include <bits/stdc++.h>

using namespace std;

int main() {

  int x;
  cin >> x;

  if (!(x & (x - 1)))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
