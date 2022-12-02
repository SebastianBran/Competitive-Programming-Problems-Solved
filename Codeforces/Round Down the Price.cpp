#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, m;
vector<int> p(10);

void pre() {
  p[0] = 1;
  for (int i = 1; i <= 9; i++) p[i] = p[i - 1] * 10;
}

void solve() {
  cin >> m;

  int ans = 1;
  for (auto it : p) {
    if (it <= m) ans = it;
    else break;
  }

  cout << m - ans << endl;
}

int main() {
  IOS
  pre();

  cin >> t;

  while (t--)
    solve();
  return 0;
}