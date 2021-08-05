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

ll b, p, m;

ll solve(ll b, ll p, ll m) {
    if (p == 0) return 1;
    ll x = solve(b, p / 2, m) % m;
    if (p & 1) return (x * x * (b % m)) % m;
    else return (x * x) % m;
}

int main(){
    IOS

    while (cin >> b >> p >> m) {
        cout << solve(b, p, m) << endl;
    }

    return 0;
}