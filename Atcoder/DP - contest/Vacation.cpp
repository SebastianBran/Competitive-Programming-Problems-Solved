#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

const int MAXN = 1e5;
int n;
int a[MAXN], b[MAXN], c[MAXN];
int memoa[MAXN], memob[MAXN], memoc[MAXN]; 

int solve() {
    memoa[0] = a[0];
    memob[0] = b[0];
    memoc[0] = c[0];

    for(int i = 1; i < n; i++) {
        memoa[i] = a[i] + max(memob[i - 1], memoc[i - 1]);
        memob[i] = b[i] + max(memoa[i - 1], memoc[i - 1]);
        memoc[i] = c[i] + max(memoa[i - 1], memob[i - 1]);
    } 

    return max({memoa[n - 1], memob[n - 1], memoc[n - 1]});
}

int main() {
    IOS

    cin >> n;

    for(int i = 0; i <n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    cout << solve() << endl;

    return 0;
}
