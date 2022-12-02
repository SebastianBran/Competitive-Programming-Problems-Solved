#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, n;

bool rec(string& c, string& s, int op) {
  if (c.size() > s.size()) return false;
  if (c != s.substr(0, c.size())) false;
  if (c.size() == s.size()) return c == s.substr(0, c.size());
  
  if (op == 1) {
    string con = c + c;
    return rec(con, s, 2);
  }
  else {
    string pb = c + s[c.size()];
    string con = c + c;
    return rec(pb, s, 1) || rec(con, s, 2);
  }
}

void solve() {
  string s;

  cin >> n;
  cin >> s;

  string c = s.substr(0, 1);

  if (rec(c, s, 1)) cout << "YES" << endl;
  else cout << "NO" << endl;
}

int main() {
  IOS

  cin >> t;

  while (t--)
    solve();
    
  return 0;
}