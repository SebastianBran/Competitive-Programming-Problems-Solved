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

int t, n, m;

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n >> m;

        vector<string> a(n);

        fore (i,0,n) cin >> a[i];

        string aux = a[0]; 
        bool ok2 = false;
        fore (i,0,m) {
            char c = aux[i];
            for(char j = 'a'; j <= 'z'; j++) {
                aux[i] = j;
                bool ok = true;
                fore (k,0,n) {
                    int cont = 0;
                    fore (l,0,m) {
                        if (aux[l] != a[k][l]) cont++;
                    }

                    if (cont > 1) {
                        ok = false;
                        break;
                    }
                }

                if (ok) {
                    cout << aux << endl;
                    ok2 = true;
                    goto fin;
                }
            }
            aux[i] = c;
        }
        fin:
        if (!ok2) cout << -1 << endl;
    }
    
    return 0;
}