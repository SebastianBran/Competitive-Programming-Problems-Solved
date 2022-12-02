#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

long long t, n;

void solve() {
  cin >> n;

  if (n & 1) {
    cout << (n / 2LL + 1LL) * (n / 2LL) * 2LL << endl;
  }
  else {
    cout << (n / 2LL) * (n / 2LL) * 2LL << endl;
  }
}

int main() {
  IOS
  cin >> t;

  while (t--)
    solve();
  return 0;
}