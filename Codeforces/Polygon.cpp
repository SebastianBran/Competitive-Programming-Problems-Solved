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

int t, n;

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n;

        char a[n][n];

        fore (i,0,n) cin >> a[i];

        bool ok = true;
        fore (i,0,n) {
            fore (j,0,n) {
                if (a[i][j] == '1') {
                    int r = (j < n - 1) ? j + 1 : j;
                    int d = (i < n - 1) ? i + 1 : i;

                    if (a[i][r] == '0' && a[d][j] == '0') {
                        ok = false;
                        goto fin;
                    }
                }
            }
        }

        fin:

        if (ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}