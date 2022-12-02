#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, n, m;

void solve() {
  cin >> n >> m;

  int total = n * m;
  if (n & 1) n--;
  if (m & 1) m--;

  cout << total - (n * m) << endl;
}

int main() {
  IOS
  cin >> t;

  while (t--)
    solve();
  return 0;
}