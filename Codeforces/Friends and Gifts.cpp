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
    vi a(n + 1,0), b(n + 1,0);

    fore(i,1,n + 1) {
        cin >> a[i];
        b[a[i]] = i;
    }

    vi c;
    fore(i,1,n + 1) {
        if (b[i] == 0) c.pb(i);
    }

    fore(i,1,n + 1) {
        if (a[i] == 0 && b[i] == 0) { //si no ha dado ni recibido
            fore(j,0,c.size()) {
                if (c[j] != i) {
                    a[i] = c[j];
                    b[c[j]] = i;
                    c.erase(c.begin() + j);
                    break;
                }
            }
        }
    }

    fore(i,1,n + 1) {
        if (a[i] == 0) { // si aun no ha dado regalo
            fore(j,0,c.size()) {
                if (c[j] != i) {
                    a[i] = c[j];
                    b[c[j]] = i;
                    c.erase(c.begin() + j);
                    break;
                }
            }
        }
    }

    fore(i,1,n + 1) cout << a[i] << " ";
    
    return 0;
}