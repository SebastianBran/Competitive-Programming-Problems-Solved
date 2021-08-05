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

        vi a(n);
        int cont1 = 0, cont2 = 0;

        fore (i,0,n) {
            cin >> a[i], a[i] = a[i] % 2;
            if (i % 2 == 0 && a[i] == 1) {
                cont1++;
            }
            if (a[i] == 0) cont2++;
        }

        if (n & 1) {
            if (cont2 == (n / 2) + 1) cout << cont1 << endl;
            else cout << -1 << endl;
        }
        else {
            if (cont2 == (n / 2)) cout << cont1 << endl;
            else cout << -1 << endl;
        }
    }

    return 0;
}