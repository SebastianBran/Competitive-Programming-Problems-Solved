#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

long long t, n;

void solve() {
  cin >> n;

  vector<int> a(n), b(n);

  for (auto& it : a) cin >> it;
  for (auto& it : b) cin >> it;

  long long ra = 0, rb = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] > b[i]) ra += (a[i] - b[i]);
    if (b[i] > a[i]) rb += (b[i] - a[i]);
  }
  
  if (ra != rb) cout << "-1" << endl;
  else cout << ra << endl;
}

int main() {
  IOS
  cin >> t;
  while (t--)
    solve();
  return 0;
}