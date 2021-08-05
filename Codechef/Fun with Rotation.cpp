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

int n, m, q, ind = 0;
char aux;

int main(){
    IOS

    cin >> n >> m;

    vi a(n);

    fore (i,0,n) cin >> a[i];

    while (m--) {
        cin >> aux >> q;

        if (aux == 'C') {
            ind = (n + ((q + ind) % n)) % n;
        }
        else if (aux == 'A') {
            ind = (n + ((-q + ind) % n)) % n;
        }
        else {
            q = (n + (ind + q - 1) % n) % n;
            cout << a[q] << endl;
        }
    }
    
    return 0;
}