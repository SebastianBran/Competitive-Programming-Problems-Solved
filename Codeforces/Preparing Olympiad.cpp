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

int n, l, r, d;

void solve() {
    cin >> n >> l >> r >> d;

    vi a(n);
    int cont = 0;
    fore (i, 0, n) cin >> a[i];

    fore (mask, 1, (1 << n)) {
        int aux = __builtin_clz(mask) + __builtin_ctz(mask);

        if (aux != 31) {
            vi b;
            int mini = 1e9, maxi = 0, sum = 0;

            fore (i, 0, n) {
                if (mask & (1 << i)) {
                    mini = min(mini, a[i]);
                    maxi = max(maxi, a[i]);
                    sum += a[i];
                }
            }

            if (sum >= l && sum <= r && (maxi - mini) >= d) cont++;
        }
    }

    cout << cont << endl;
}

int main(){
    IOS

    solve();

    return 0;
}