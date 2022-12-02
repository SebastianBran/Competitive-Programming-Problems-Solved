#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, n;
string s;

void solve() {
  cin >> n >> s;

  set<int> st;
  int ans = 0;

  for (auto it : s) {
    if (st.count(it)) ans++;
    else {
      st.insert(it);
      ans += 2;
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