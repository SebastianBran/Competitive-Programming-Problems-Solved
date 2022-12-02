#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, p;
string s, aux;

void solve() {
  cin >> s >> p;
  aux = s;

  sort(s.begin(), s.end());
  map<int, int> m;

  int cost = 0;
  for (auto it : s) {
    int c = (it - 'a') + 1;
    if (cost + c <= p) cost += c;
    else m[c]++;
  }

  for (auto it : aux) {
    int c = (it - 'a') + 1;
    if (m[c] > 0) m[c]--;
    else cout << it;
  }
  cout << endl;
}

int main() {
  IOS
  cin >> t;
  while (t--)
    solve();
  return 0;
}