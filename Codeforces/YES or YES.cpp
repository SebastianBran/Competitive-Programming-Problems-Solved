#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t;

void solve() {
  cin >> t;
  
  string s;
  for (int i = 0; i < t; i++) {
    cin >> s;

    for (auto &it : s) it = toupper(it);
    
    if (s == "YES") cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}

int main() {
  IOS
  solve();
  return 0;
}