#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define forell(i,x,n) for(long long i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
#define sz(x) (int)x.size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vii;

int t, n;

void solve() {
    cin >> n;

    vi a(n);
    fore(i,0,n) cin >> a[i];

    int cont = 0;
    fore(i,1,n) {
        if(a[i] > a[i - 1] * 2) {
            int aux = a[i];
            while(aux > a[i - 1] * 2) {
                cont++;
                aux = aux & 1 ? (aux / 2) + 1 : aux / 2;
            }
        }
    }

    for(int i =  n - 2; i >= 0; i--) {
        if(a[i] > a[i + 1] * 2) {
            int aux = a[i];
            while(aux > a[i + 1] * 2) {
                cont++;
                aux = aux & 1 ? (aux / 2) + 1 : aux / 2;
            }
        }
    }

    cout << cont << endl;
}

int main(){
    IOS

    cin >> t;
    
    while(t--)
        solve();
    
    return 0;
}
