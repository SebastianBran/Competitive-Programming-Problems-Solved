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
typedef vector<pair<int,int>> vii;

int q, n;

void solve() {
    cin >> n;

    vi a(n);

    fore(i,0,n) cin >> a[i];

    bool ok = true;
    fore(i,0,n) {
        if (abs(a[i] - a[(i + 1) % n]) == 1 || (a[i] == n && a[(i + 1) % n] == 1) || (a[i] == 1 && a[(i + 1) % n] == n)) continue;
        else {
            ok = false;
            break;
        }
    }  

    if (ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    IOS

    cin >> q;

    while (q--) {
        solve();    
    }   

    return 0;
}