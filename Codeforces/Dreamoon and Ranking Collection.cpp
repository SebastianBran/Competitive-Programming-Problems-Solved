#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define forell(i,x,n) for(long long i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
#define sz(x) (int)x.size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vii;

int t, n, x;

void solve() {
    cin >> n >> x;

    vi a(101, 0);
    int aux;
    fore(i,0,n) cin >> aux, a[aux]++;

    int j = 1, cont = 0; 
    fore(i,1,101) {
        if (a[i] == 0) cont++;
        if (cont == x + 1) break;
        j = i;
    }

    if (cont < x + 1) cout << j + (x - cont) << endl;
    else cout << j << endl;
}

int main(){
    IOS

    cin >> t;
    while(t--)
        solve();    

    return 0;
}