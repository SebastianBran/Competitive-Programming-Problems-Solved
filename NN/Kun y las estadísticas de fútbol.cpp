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

int n, q;
ll g;

int main(){
    IOS

    cin >> n;

    vector<ll> a(n);

    fore (i,0,n) cin >> a[i];

    ordenar(a);

    cin >> q;

    while (q--) {
        cin >> g;

        ll aux = 0;
        fore (i,0,n) {
            if (a[i] <= g) {
                if ((g | a[i]) == g) {
                    aux |= a[i];
                }
            }   
            else break;
        }

        if (aux == g) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}