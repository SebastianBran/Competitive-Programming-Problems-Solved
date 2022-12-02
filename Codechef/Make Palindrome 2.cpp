#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, n, maxOp;
string s;

void solve() {
  cin >> n >> s;

  int cont0, cont1;
  cont0 = cont1 = 0;

  for (auto it : s) {
    if (it == '1') cont1++;
    else cont0++;
  }

  string ans;
  if (cont0 >= cont1) ans = string(cont0, '0');
  else ans = string(cont1, '1');

  cout << ans << endl;
}

int main() {
  IOS
  cin >> t;

  while (t--)
    solve();
  return 0;
}