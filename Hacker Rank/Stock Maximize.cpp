#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int t, n;

long long solve(vector<long long>& a) {
    long long lastmax = 0;
    long long profit = 0;
    for(int i = n - 1; i >= 0; i--) {
        lastmax = max(lastmax, a[i]);
        profit += lastmax - a[i];
    }
    return profit;
}

int main() {
    IOS

    cin >> t;

    while(t--) {
        cin >> n;
        vector<long long> a(n);
        for(auto &it : a) cin >> it;
        cout << solve(a) << endl;
    }

    return 0;
}