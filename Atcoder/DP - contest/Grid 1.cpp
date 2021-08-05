#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define end "\n"

int h, w;
char grid[1000][1000];
vector<vector<long long>> dp(1000, vector<long long>(1000, 0));
const long long MOD = 1e9 + 7;

int solve() {
    for(int i = 0; i < h; i++) {
        if(grid[i][0] != '#') dp[i][0] = 1;
        else break;
    }
    for(int j = 0; j < w; j++) {
        if(grid[0][j] != '#') dp[0][j] = 1;
        else break;
    }

    for(int i = 1; i < h; i++) {
        for(int j = 1; j < w; j++) {
            if(grid[i][j] != '#') dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
        }
    }

    return dp[h - 1][w - 1];
}

int main() {
    IOS
    cin >> h >> w;

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> grid[i][j];
        }
    }

    cout << solve() << endl;

    return 0;
}