#include <stdio.h>

int main() {

  int t;
  scanf("%d", &t);

  while (t--) {

    int n;
    scanf("%d", &n);

    char s[n];
    scanf("%s", s);

    int af = 0;

    for (int i = 1; i < n - 1; i++) {
      for (int j = 0; j < n; j++) {
        if (s[i] == s[j] && i != j) {
          af = 1;
          break;
        }
      }
    }

    if (af)
      printf("YES\n");
    else
      printf("NO\n");
  }

  return 0;
}
