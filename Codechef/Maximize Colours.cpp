#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, a[3];

void solve() {
  cin >> a[0] >> a[1] >> a[2];

  int ans = 0;
  sort(a, a + 3, greater<int>());

  for (auto it : a) {
    if (it > 0) {
      ans++;
    }
  }

  if (a[0] > 1 && a[1] > 1) {
    a[0]--;
    a[1]--;
    ans++;
  }
  if (a[0] > 1 && a[2] > 1) {
    a[0]--;
    a[2]--;
    ans++;
  }
  if (a[1] > 1 && a[2] > 1) {
    a[1]--;
    a[2]--;
    ans++;
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