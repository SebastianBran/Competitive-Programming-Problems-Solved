#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, n;

void solve() {
  cin >> n;

  int h, maxi = -1;
  map<int, int> m;

  for (int i = 0; i < n; i++) {
    cin >> h;
    m[h]++;
    maxi = max(maxi, h);
  }

  int cont = 0, maxcont = 0;
  for (auto it : m) {
    if (it.second == 1) cont++;
    maxcont = max(maxcont, it.second);
  }

  int ans = 0;

  if (cont & 1) {
    ans = (cont + 1) / 2;
    if (m[maxi] == 1 && maxcont == 2) ans++;
  }
  else ans = cont / 2;

  cout << ans << endl;
}

int main() {
  IOS

  cin >> t;

  while (t--)
    solve();
    
  return 0;
}