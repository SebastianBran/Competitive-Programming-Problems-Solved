#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, x;

void solve() {
  cin >> x;
  
  int c = 0;
  while ((x > 0) && (x % 2 != 0) && (x % 7 != 0)) {
    x -= 7 * c;
    c++;
  }

  if (x >= 0 && ((x % 2 == 0) || (x % 7 == 0))) cout << "YES" << endl;
  else cout << "NO" << endl;
}

int main() {
  IOS

  cin >> t;

  while (t--)
    solve();
    
  return 0;
}