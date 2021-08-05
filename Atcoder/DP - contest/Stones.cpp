#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

const int MAXN = 100;
const int MAXK = 1e5 + 1;
int n, k, a[MAXN];
int memo[MAXK];

bool solve() {
    memo[0] = false;
    for(int i = 1; i <= k; i++) {
        memo[i] = false;
        for(int j = 0; j < n; j++) {
            if(i - a[j] >= 0 && !memo[i - a[j]]) {
                memo[i] = true;
                break;
            }
        }
    }

    return memo[k];
}

int main() {
    IOS

    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];

    if(solve()) cout << "First" << endl;
    else cout << "Second" << endl;

    return 0;
}