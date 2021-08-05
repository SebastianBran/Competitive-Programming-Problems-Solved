#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int n;

void solve() {
    cin >> n;

    int sum_max = n * 1000;
    vector<vector<bool>> memo(n + 1, vector<bool>(sum_max + 1, false));
    vector<int> a(n);

    for(auto &it : a) cin >> it;

    memo[0][0] = true;

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= sum_max; j++) {
            memo[i][j] = memo[i - 1][j];
            int left = j - a[i - 1];
            if(left >= 0 && memo[i - 1][left]) memo[i][j] = true;
        }
    }

    vector<int> ans;
    for(int i = 1; i <= sum_max; i++) {
        if(memo[n][i]) ans.push_back(i);
    }

    cout << ans.size() << endl;
    for(auto it : ans) cout << it << " ";
}
 
int main() {
    IOS
    
    solve();

    return 0;
}