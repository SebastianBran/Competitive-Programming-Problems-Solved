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

ll n;

bool check(ll x) {
    return n <= (x * (x - 3)) / 2; 
}

ll solve() {
    ll l = 3, r = 1e8;

    while (l < r) {
        ll mit = l + (r - l) / 2;
        if (check(mit)) r = mit;
        else l = mit + 1;
    }

    return l;
}

int main() {
    IOS

    int cont = 1;
    while (cin >> n && n != 0) {
        cout << "Case " << cont++ << ": " << solve() << endl;
    }

    return 0;
}