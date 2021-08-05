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

int n;

int main(){
    IOS

    cin >> n;

    vector<ll> a(n);

    fore (i,0,n) cin >> a[i];

    ll current = 0;
    set<ll> b;
    b.insert(0);
    int cont = 0;

    fore (i,0,n) {
        current += a[i];
        if (b.count(current)) {
            current = a[i];
            b.clear();
            b.insert(0);    
            cont++;
        }
        b.insert(current);
    }

    cout << cont << endl;

    return 0;
}