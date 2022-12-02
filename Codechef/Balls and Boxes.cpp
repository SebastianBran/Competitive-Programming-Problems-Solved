#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

long long t, n, k;

void solve() {
  cin >> n >> k;

  if ((k * (k + 1)) / 2 <= n) cout << "YES" << endl;
  else cout << "NO" << endl;
}

int main() {
  IOS
  cin >> t;
  while (t--)
    solve();
  return 0;
}