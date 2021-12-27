/**
 *    author: abhijayrajvansh  created: 12.11.2021 13:25:23
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
void abhijayrajvansh (){}

bool found[10];
int main() {
  int t; cin >> t;
  for (int tc = 1; tc <= t; tc++) {
    int n; cin >> n;

    int last = 0;
    if(n != 0) {
      memset(found, 0, sizeof(found));

      bool foundAll = false;
      while(!foundAll) {
        int next = last = last + n;
        while(next != 0) { found[next % 10] = true; next /= 10; }

        foundAll = true;
        for(int j = 0; j < 10; j++) {
          if(!found[j]) { foundAll = false; break; }
        }
      }
    }

    if(last == 0) printf("ANTEROGRADE AMNESIA\n");
    else printf("%d\n", last);
  }
  return 0;
}
