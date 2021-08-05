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

int n, m, aux;

int main() {
    IOS

    cin >> n >> m;

    vi a(n);
    vi c(n);
    set<int> b;

    fore(i,0,n) cin >> a[i];

    for (int i = n-1; i >= 0; i--) {
        b.insert(a[i]);
        c[i] = b.size();
    }

    while (m--) {
        cin >> aux;
        cout << c[aux-1] << endl;
    }

    return 0;
}