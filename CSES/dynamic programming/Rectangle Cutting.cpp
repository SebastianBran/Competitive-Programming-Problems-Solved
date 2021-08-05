#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

const long long INF = 1e18;
const int MAXN = 500;
int a, b;
long long memo[MAXN][MAXN];

long long solve(int x, int y) { //O(a^2 * b + b * a^2)
    for(int i = 0; i <= x; i++) {
        for(int j = 0; j <= y; j++) {
            if(i == j) memo[i][j] = 0;
            else {
                memo[i][j] = INF;
                for(int k = 0; k < i; k++) memo[i][j] = min(memo[i][j], memo[k][j] + memo[i - k - 1][j] + 1);
                for(int k = 0; k < j; k++) memo[i][j] = min(memo[i][j], memo[i][k] + memo[i][j - k - 1] + 1);
            }
        }
    }

    return memo[x][y];
}

int main() {
    IOS

    cin >> a >> b;
    cout << solve(a - 1, b - 1) << endl;

    return 0;
}