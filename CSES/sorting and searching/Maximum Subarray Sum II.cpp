#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

const long long INF = 1e18;
const int MAXN = 2 * 1e5;
int n, a, b;
long long arr[MAXN];

long long solve() {
    vector<long long> sum(n + 1);

    sum[0] = 0;
    for(int i = 0; i < n; i++) sum[i + 1] = arr[i] + sum[i];

    long long maxi = -INF;
    multiset<long long> mini;

    for(int i = a; i <= n; i++) {
        if(i > b) mini.erase(mini.find(sum[i - b - 1]));
        mini.insert(sum[i - a]);
        maxi = max(maxi, sum[i] - *mini.begin());
    }

    return maxi;
}

int main() {
    IOS

    cin >> n >> a >> b;
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << solve();

    return 0;
}