#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, n, b;
string s;

void solve() {
  cin >> n;

  vector<int> v(n); 

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> b >> s;
    int du = 0;
    for (auto it : s) {
      if (it == 'U') du--;
      else du++;
    }
    v[i] = (10 + (v[i] + du) % 10) % 10;
  }

  for (auto it : v) cout << it << " ";
  cout << endl;
}

int main() {
  IOS
  cin >> t;

  while (t--)
    solve();
  return 0;
}