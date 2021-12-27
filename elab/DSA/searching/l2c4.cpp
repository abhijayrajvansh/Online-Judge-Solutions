/**
 *    author: abhijayrajvansh  created: 12.11.2021 12:34:00
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
void abhijayrajvansh (){}

bool is_square(int x)
{
  if ((x & 0x7) == 1
      || (x & 0x1F) == 4
      || (x & 0x7F) == 16
      || (x & 0xBF) == 0)
  {
    int s = x;
    if (x > 0) {
      for (int i = 0; i < 18; ++i) {
        s = (s + x/s)/2;
      }
      while (s*s > x) {
        --s;
      }
      while (s*s < x) {
        ++s;
      }
    }

    return s*s == x;
  } else {
    return false;
  }
}

int ndoublesquares(int x)
{
  int count = 0;

  for (int i = 0; true; ++i) {
    int ii = i*i;
    int resid = x - ii;

    if (ii > resid) {
      break;
    }

    if (is_square(resid)) {
      ++count;
    }
  }

  return count;
}

int main (){
    int TT; cin >> TT;
    while(TT--){
        int n;
        cin >> n;
        cout << ndoublesquares(n) << nl;
    }
    return 0;
}