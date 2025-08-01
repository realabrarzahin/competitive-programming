#include <bits/stdc++.h>

using namespace std;

int main() {

  long long n;
  cin >> n;

  long long count = 0;

  while (n != 0) {
  
    int r = n % 10;

    if(r == 4 || r == 7) count++;
    
    n = (n - r) / 10;
    
  }

  cout << ((count == 4 || count == 7) ? "YES" : "NO") << endl;

  return 0;
}
