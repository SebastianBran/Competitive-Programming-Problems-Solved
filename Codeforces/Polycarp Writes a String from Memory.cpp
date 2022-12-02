#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t;
string s;

void solve() {
  int ans = 1;
  set<char> c;

  cin >> s;
  for (auto it : s) {
    if (c.count(it) && c.size() <= 3) continue;

    if (!c.count(it) && c.size() < 3) c.insert(it);
    else {
      c = set<char>();
      c.insert(it);
      ans++;
    }
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