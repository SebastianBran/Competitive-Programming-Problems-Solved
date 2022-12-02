#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, n;

void solve() {
  cin >> n;

  vector<string> v(n);
  map<string, bool> m;

  for (auto &it : v) {
    cin >> it;
    m[it] = true;
  }

  for (auto it : v) {
    int slen = it.size();
    bool ans = false;
    for (int i = 0; i < slen; i++) {
      string a = it.substr(0, slen - i);
      string b = it.substr(slen - i, slen);
      if (m[a] && m[b]) {
        ans = true;
        break;
      }
    }
    cout << ans;
  }
  cout << endl;
}

int main() {
  IOS;
  cin >> t;
  while (t--)
    solve();
  return 0;
}