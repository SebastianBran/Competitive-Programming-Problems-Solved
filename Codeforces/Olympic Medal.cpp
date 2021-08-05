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

int n, m, k;
ll a, b, aux;

void solve() {
    cin >> n; 
    ll r1 = 0;
    fore(i,0,n) {
        cin >> aux;
        r1 = max(r1, aux);
    }

    cin >> m;
    ll p1 = 0;
    fore(i,0,m) {
        cin >> aux;
        p1 = max(p1, aux);
    }

    cin >> k;
    ll p2 = 1e9;
    fore(i,0,k) {
        cin >> aux;
        p2 = min(p2, aux);
    }

    cin >> a >> b;
    double result = sqrt((double)(r1 * r1 * p1 * b) / (double)(a * p2 + b * p1));

    cout << fixed << setprecision(12);
    cout << result;
}

int main(){
    IOS

    solve();    

    return 0;
}