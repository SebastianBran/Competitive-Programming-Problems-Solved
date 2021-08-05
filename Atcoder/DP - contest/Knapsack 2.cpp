#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int n, w;

long long solve() {
    cin >> n >> w;

    vector<long long> v(n);
    vector<long long> we(n);

    long long sum_max = 0;
    for(int i = 0; i < n; i++) {
        cin >> we[i] >> v[i];
        sum_max += v[i];
    }

    vector<long long> memo(sum_max + 1, 1e18);
    memo[0] = 0;

    for(int i = 0; i < n; i++) {
        for(long long j = sum_max - v[i]; j >= 0; j--) {
            memo[j + v[i]] = min(memo[j + v[i]], memo[j] + we[i]);
        }
    }
    
    int ans = 0;
    for(int i = 0; i < sum_max + 1; i++) {
        if(memo[i] <= w) {
            ans = max(ans, i);
        }
    }

    return ans;
}

int main() {
    IOS
    
    cout << solve() << endl;

    return 0;
}