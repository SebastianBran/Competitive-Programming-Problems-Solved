#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, x;

void solve() {
  cin >> x;

  if (x <= 50) cout << "LEFT" << endl;
  else cout << "RIGHT" << endl;
}

int main() {
  IOS

  cin >> t;

  while (t--)
    solve();
    
  return 0;
}