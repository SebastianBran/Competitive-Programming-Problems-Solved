#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, p, q, r;

long long pow(int a, int b) {
  if (b == 0) return 0;
  long long res = 1;
  for (int i = 0; i < b; i++) {
    res = res * (long long) a;
  }
  return res;
}

void solve() {
  cin >> p >> q >> r;

  int a = p & r, b = p & q, c = q & r;

  if ((a | b) != p || (b | c) != q || (c | a) != r) {
    cout << 0 << endl;
    return;
  }

  int x = __builtin_popcount(a & b & c);

  if (x == 0) cout << 1 << endl;
  else cout << pow(4, x) << endl;
}

int main() {
  IOS
  cin >> t;
  while (t--)
    solve();
  return 0;
}