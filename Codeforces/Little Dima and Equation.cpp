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

ll pw(ll x, ll a) {
    int pot = 1;
    fore (i,0,a) pot *= x;
    return pot;
}

ll sum(ll x) {
    string s = to_string(x);
    int cont = 0;
    for (auto it : s) cont += (it - '0');
    return cont;
}

int a, b, c;
vi x;

int main(){
    IOS

    cin >> a >> b >> c;

    for (ll i = 1; i <= 81; i++) {
        ll tt = b*pw(i, a) + c;
        if (tt > 0 && tt < 1e9) {
            if (sum(tt) == i) x.pb(tt);
        }
    }

    cout << x.size() << endl;
    for (auto it : x) cout << it << " ";
    
    return 0;
}