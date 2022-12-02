#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, w, x, y, z;

void solve() {
  cin >> w >> x >> y >> z;
  
  if (x == w ||
    y == w ||
    z == w ||
    (x + y) == w ||
    (x + z) == w ||
    (y + z) == w ||
    (x + y + z) == w) {
      cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}  

int main() {
  IOS

  cin >> t;

  while (t--)
    solve();
  return 0;
}