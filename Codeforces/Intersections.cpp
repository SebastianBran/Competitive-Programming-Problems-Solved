#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define forell(i,x,n) for(long long i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vii;

int t, n;
ll cont = 0;

vi merge(vi& L, vi& R) {
    int j = 0;

    vi aux;
    fore(i, 0, L.size()) {
        while (j < R.size() && R[j] < L[i]) {
            aux.pb(R[j++]);
            cont += (ll(L.size()) - ll(i));
        }
        aux.pb(L[i]);
    }

    while (j < R.size()) aux.pb(R[j++]);

    return aux;
}

void solve(vi& a) {
    if (a.empty()) return;
    if (a.size() == 1) return;

    int len = a.size();

    vi L = vi(a.begin(), a.begin() + len / 2);
    vi R = vi(a.begin() + len / 2, a.end());

    solve(L);
    solve(R);

    a = merge(L, R);
}

int main(){
    IOS

    cin >> t;

    while (t--) {
        cont = 0;

        cin >> n;

        int aux;
        
        vi a(n), b(n);

        fore(i, 0, n) {
            cin >> aux;
            a[aux - 1] = i + 1;
        }

        fore(i, 0, n) {
            cin >> aux;
            b[i] = a[aux - 1];
        }

        solve(b);

        cout << cont << endl;
    }

    return 0;
}