#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
#define sz(x) (int)x.size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;

int n, m, x, y, k, dx, dy;

void solve() {
    cin >> n >> m;
    cin >> x >> y;

    cin >> k;

    ll steps = 0;
    int p1, p2;
    int cont;

    while(k--) {
        cin >> dx >> dy;
        
        if (dx > 0) p1 = (n - x) / dx;
        else if (dx < 0) p1 = (x - 1) / abs(dx);
        else p1 = 1e9 + 1;

        if (dy > 0) p2 = (m - y) / dy;
        else if (dy < 0) p2 = (y - 1) / abs(dy);
        else p2 = 1e9 + 1;

        cont = min((ll)p1, (ll)p2);
        steps += cont;
        x += (cont * dx);
        y += (cont * dy);
    }

    cout << steps << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}