#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

long long a, b;
vector<long long> ans;

bool dfs(long long num) {
  if (num > b) return false;
  if (num == b || dfs(num * 2LL) || dfs(num * 10LL + 1LL)) {
    ans.push_back(num);
    return true;
  }
  return false;
}

void solve() {
  cin >> a >> b;

  if (dfs(a)) {
    reverse(ans.begin(), ans.end());
    cout << "YES" << endl;
    cout << ans.size() << endl;
    for (auto it : ans) cout << it << " ";
  } 
  else 
    cout << "NO" << endl;
}

int main() {
  IOS
  solve();
  return 0;
}