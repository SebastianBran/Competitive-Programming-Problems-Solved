#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define forell(i,x,n) for(long long i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vii;
 
const int MAXN = 1e3 + 1;
string s, t;
int dp[MAXN][MAXN];
int path[MAXN][MAXN];
 
void reconstruction() {
    int i = s.size(), j = t.size();
 
    vector<string> ans;
 
    while (i != 0 || j != 0) {
        if (i == 0) { //insert
            ans.pb("INSERT " + to_string(j) + " " + t[j - 1]);
            j--;
        }
        else if (j == 0) { //remove
            ans.pb("DELETE " + to_string(j + 1));
            i--;
        }
        else if (path[i][j] == 1) { //equal
            i--;
            j--;
            continue;
        }
        else if (path[i][j] == 2) { //insert
            ans.pb("INSERT " + to_string(j) + " " + t[j - 1]);
            j--;
        }
        else if (path[i][j] == 3) { //replace
            ans.pb("REPLACE " + to_string(j) + " " + t[j - 1]);
            i--;
            j--;
        }
        else { //remove (delete)
            ans.pb("DELETE " + to_string(j + 1));
            i--;
        }
    }
 
    reverse(all(ans));
 
    cout << ans.size() << endl;
    for (auto it : ans) cout << it << endl;
}
 
void solve() {
    cin >> s >> t;
 
    fore (i, 0, s.size() + 1) dp[i][0] = i, path[i][0] = 4;
    fore (i, 0, t.size() + 1) dp[0][i] = i, path[0][i] = 2;
 
    int equal, insert, replace, remove;
 
    fore (i, 1, s.size() + 1) {
        fore (j, 1, t.size() + 1) {
            equal = dp[i - 1][j - 1]; // 1
            insert = dp[i][j - 1] + 1; // 2
            replace = dp[i - 1][j - 1] + 1; // 3
            remove = dp[i - 1][j] + 1; // 4
 
            if (s[i - 1] == t[j - 1]) {
                dp[i][j] = min({equal, insert, remove});
 
                if (equal == dp[i][j]) path[i][j] = 1;
                else if (insert == dp[i][j]) path[i][j] = 2;
                else path[i][j] = 4;
            }
            else {
                dp[i][j] = min({insert, replace, remove});
 
                if (insert == dp[i][j]) path[i][j] = 2;
                else if (replace == dp[i][j]) path[i][j] = 3;
                else path[i][j] = 4;
            }
        }
    }
    
    reconstruction();
}
 
int main() {
    IOS
 
    solve();
 
    return 0;
}