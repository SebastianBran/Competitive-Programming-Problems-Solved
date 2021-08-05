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

int n, q, aux;

int main(){
    IOS

    cin >> n >> q;

    vi a(n);

    fore(i,0,n) cin >> a[i];

    while (q--) {
        cin >> aux;
        if (binary_search(all(a), aux)) cout << (int)(upper_bound(all(a), aux) - a.begin() - 1) << endl;
        else cout << -1 << endl;
    }
    
    return 0;
}