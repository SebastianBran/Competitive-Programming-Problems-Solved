#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, x, y;

void solve() {
  cin >> x >> y;

  if (x < y) cout << "REPAIR" << endl;
  else if (y < x) cout << "NEW PHONE" << endl;
  else cout << "ANY" << endl;
}

int main() {
  IOS
  cin >> t;
  while (t--)
    solve();
  return 0;
}