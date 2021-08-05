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

int n;

void solve() {
    cin >> n;

    vi a, b;
    int aux;
    fore(i,0,n) {
        cin >> aux;
        if(aux > 0) a.pb(aux);
        else b.pb(aux);
    }
    
    ll cont = 0;
    for(auto it : a) cont += (ll)(it - 1);

    ordenar(b);
    if(b.size() & 1) {
        fore(i,0,b.size() - 1) cont += (ll)abs(-1 - b[i]);
        cont += (ll)(1 - b[b.size() - 1]);
    }
    else {
        fore(i,0,b.size()) cont += (ll)abs(-1 - b[i]);
    }

    cout << cont << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}