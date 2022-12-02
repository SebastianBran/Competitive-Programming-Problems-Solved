#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

long long t, n, k, x, y;

void solve() {
  cin >> n >> k >> x >> y;
  cout << k * x + min((n - k) * y, (n - k) * x) << endl;
}

int main() {
  IOS

  cin >> t;

  while (t--)
    solve();
  return 0;
}