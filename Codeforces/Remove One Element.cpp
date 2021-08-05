#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;

int n;

int main(){
    IOS

    cin >> n;

    vi a(n);
    fore(i,0,n) cin >> a[i];

    int res = 0;

    vi r(n, 1);
    for(int i = n - 2; i >= 0; i--) {
        if (a[i + 1] > a[i]) r[i] = r[i + 1] + 1;
        res = max(res, r[i]);
    }
    
    vi l(n, 1);
    for(int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) l[i] = l[i - 1] + 1;
        res = max(res, l[i]);
    }

    fore(i,0,n - 2) {
        if (a[i] < a[i + 2]) res = max(res, l[i] + r[i + 2]);
    }

    cout << res << endl;

    return 0;
}