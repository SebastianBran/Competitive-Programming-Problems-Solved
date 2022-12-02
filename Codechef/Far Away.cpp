#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

const int MAXN = 2 * 1e5;
int t, n, m, a[MAXN];

void solve() {
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  long long ans = 0;

  for (int i = 0; i < n; i++) {
    ans += max(abs(a[i] - m), abs(a[i] - 1));
  }

  cout << ans << endl;
}

int main() {
  IOS

  cin >> t;

  while (t--)
    solve();
    
  return 0;
}