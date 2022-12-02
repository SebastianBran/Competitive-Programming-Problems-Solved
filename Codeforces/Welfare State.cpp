#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int n, q;

void solve() {
  cin >> n;

  vector<int> a(n + 1);
  vector<bool> ans(n + 1, false);

  for (int i = 1; i < n + 1; i++) cin >> a[i];

  cin >> q;

  vector<int> c(q), x(q), p(q);

  for (int i = 0; i < q; i++) {
    cin >> c[i];
    if (c[i] == 1) cin >> p[i] >> x[i];
    else cin >> x[i];
  }

  int maxi = -1;
  for (int i = q - 1; i >= 0; i--) {
    if (c[i] == 1 && !ans[p[i]]) {
      a[p[i]] = max(x[i], maxi);
      ans[p[i]] = true;
    }
    else if (c[i] == 2) 
      maxi = max(maxi, x[i]);
  }

  for (int i = 1; i < n + 1; i++) {
    if (!ans[i]) a[i] = max(maxi, a[i]);
  }

  for (int i = 1; i < n + 1; i++) {
    cout << a[i] << " ";
  }
}

int main() {
  IOS
  solve();
  return 0;
}