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

int t, w, h, n;

void solve() {
    cin >> w >> h >> n;

    int cont = 1;
    int exp = 1;

    while (w % 2 == 0) {
        w /= 2;
        cont += exp;
        exp *= 2;
    }

    while (h % 2 == 0) {
        h /= 2;
        cont += exp;
        exp *= 2;
    }

    if (cont >= n) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    IOS

    cin >> t;

    while (t--) {
        solve();    
    }

    return 0;
}