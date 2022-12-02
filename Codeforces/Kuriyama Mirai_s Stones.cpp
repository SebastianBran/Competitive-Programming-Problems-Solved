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

int n, m, t, l, r, aux;

int main(){
    IOS

    cin >> n;
    vector<ll> a(n + 1), b(n + 1);

    a[0] = b[0] = 0;
    fore (i,0,n) {
        cin >> b[i + 1];
        a[i + 1] = b[i + 1] + a[i];
    }

    sort(all(b));

    fore (i,0,n) b[i + 1] += b[i];

    cin >> m;

    fore (i,0,m) {
        cin >> t >> l >> r;
        if (t == 1) cout << a[r] - a[l - 1] << endl;
        else cout << b[r] - b[l - 1] << endl;
    }
    
    return 0;
}