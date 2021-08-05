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

int p, q, l, r;

bool intersection(pair<int,int>& a, pair<int,int>& b, int t) {
    if (a.first <= (b.second + t) && a.second >= (b.first + t)) return true;
    else return false;
}

void solve() {
    cin >> p >> q >> l >> r;

    vii a(p), b(q);

    fore(i,0,p) cin >> a[i].first >> a[i].second;
    fore(i,0,q) cin >> b[i].first >> b[i].second;

    int cont = 0;
    fore(i,l,r + 1) {
        fore(j,0,q) {
            fore(k,0,p) {
                if (intersection(a[k], b[j], i)) {
                    cont++;
                    goto go;
                }
            }
        }
        go:
        continue;
    }

    cout << cont << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}