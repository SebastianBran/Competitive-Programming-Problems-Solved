#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define end '\n'

const int MAXN = 2 * 1e5;
int L[MAXN + 1], len = 0;
long long ans[MAXN + 1];
int h[MAXN], n; 
long long a[MAXN];

// int main() {
//     IOS

//     cin >> n;
//     for(int i = 0; i < n; i++) cin >> h[i];
//     for(int i = 0; i < n; i++) cin >> a[i];

//     L[0] = -1;
//     for(int i = 0; i < n; i++) {
//         int l = 0, r = len;
//         while(l < r) {
//             int mit = l + (r - l) / 2;
//             if(L[mit] < h[i]) l = mit + 1;
//             else r = mit;
//         }
//         if(L[l] < h[i]) {
//             ans[len] = a[i];
//             L[len++] = h[i];
//         }
//         else if(a[i] > ans[l]) {
//             L[l] = h[i];
//             ans[l] = a[i];
//         }
//     }

//     // for(int i = 0; i < len; i++) cout << L[i] << " ";
//     // cout << endl;
//     // for(int i = 0; i < len; i++) cout << ans[i] << " ";
//     // cout << endl;

//     long long res = 0;
//     for(int i = 0; i < len; i++) res += ans[i];
//     cout << res << endl;

//     return 0;
// }