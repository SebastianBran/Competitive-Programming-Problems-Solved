#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

const int INF = 2e9;
const int MAXN = 1e5;
int n;
int a[MAXN];

int main() {
    IOS
    
    int sum_max = 0;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] > 0) sum_max += a[i];
    }

    if(sum_max & 1) cout << sum_max << endl;
    else {
        int posi = INF, nega = -INF;
        for(int i = 0; i < n; i++) {
            if(a[i] > 0 && a[i] & 1) 
                posi = min(posi, a[i]);
        }
        int ans = sum_max - posi;
        for(int i = 0; i < n; i++) {
            if(a[i] < 0 && a[i] & 1) 
                ans = max(ans, sum_max + a[i]);
        }
        cout << ans << endl;
    }

    return 0;
}