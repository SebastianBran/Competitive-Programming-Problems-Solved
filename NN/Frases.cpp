#include <bits/stdc++.h>
using namespace std;

//no es solucion e.e

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;

ll n, m;
ll cont = 0;

int main(){
    IOS

    cin >> n >> m;

    ll c1 = (ll)n/3;
    ll c2 = (ll)m/3;

    cont += (ll)min(c1, c2)*2;

    if (c1 == c2) {
        cout << cont << endl;
        return 0;
    }
    else if (c1 < c2) {
        m -= (ll)c1*3;
        n -= (ll)c1*3;
        cont += min(m/2, n);
    }
    else {
        n -= (ll)c2*3;
        m -= (ll)c2*3;
        cont += min(n/2, m);
    }

    cout << cont << endl;

    return 0;
}