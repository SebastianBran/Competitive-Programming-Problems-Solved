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

const ll maxn = 1e7;
vector<bool> primes(maxn + 1, true);
vector<ll> pr;

void sieve(){
    primes[0] = primes[1] = false;
    pr.pb(2);

    for(ll i = 4; i <= maxn; i += 2) primes[i] = false;

    for(ll i = 3; i <= maxn; i++){
        if (primes[i]) {
            pr.pb(i);
            for(ll j = i * i; j <= maxn; j += 2 * i){
                primes[j] = false;
            }
        }
    }
}

int t;
ll d;

void solve() {
    cin >> d;

    ll a[2];
    a[0] = *lower_bound(all(pr), 1 + d);
    a[1] = *lower_bound(all(pr), a[0] + d);

    cout << (ll)a[0] * (ll)a[1] << endl;
}

int main(){
    IOS

    sieve();
    
    cin >> t;
    
    while (t--) {
        solve(); 
    }     

    return 0;
}