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

int t, n, k;

vi div(int n) {
    vi a;
    a.pb(1);

    for(int i = 2; i * i <= n; i++) {
        if (n % i == 0) a.pb(i);
    }

    a.pb(n);

    return a;
}

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n >> k;

        if (n <= k) cout << 1 << endl;
        else {
            vi a = div(n);

            int aux = n;
            for(int i = a.size() - 1; i >= 0; i--) {
                if (a[i] <= k) aux = min(aux, n / a[i]);
                if (n / a[i] <= k) aux = min(aux, a[i]);
            } 

            cout << aux << endl;
        }
    }
    
    return 0;
}