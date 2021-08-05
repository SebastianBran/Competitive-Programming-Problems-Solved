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

int t, k;

int main() {
    IOS

    cin >> t;

    fore(j,1,t+1) {
        vi a;

        cin >> k;

        int n = k/2;

        int cont = 0;
        fore (i,2,n) {
            if(k % i == 0) {
                a.pb(i);
                cont++;
                if (cont == 2) break;
            }
        }

        cout << "Case #" << j << ": " << k << " = " << a[0] << " * " << k/a[0] << " = " << a[1] << " * " << k/a[1] << endl;
    }

    return 0;
}