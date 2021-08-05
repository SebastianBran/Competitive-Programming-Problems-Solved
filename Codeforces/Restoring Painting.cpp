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

int n, a, b, c, d;

void solve() {
    cin >> n >> a >> b >> c >> d;
    
    int pmax = max({b + a, a + c, c + d, d + b});
    int pmin = min({b + a, a + c, c + d, d + b});

    long long aux1, aux2, ans = 0;
    for(int i = 1; i <= n; i++) {
        aux1 = pmax + i + 1;
        aux2 = pmin + i + n;
        if(aux2 - aux1 >= 0) ans += ((aux2 - aux1) + 1);
    }

    cout << ans << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}