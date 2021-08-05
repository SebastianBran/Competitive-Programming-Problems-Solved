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

ll l, r;

ll solve() {
    cin >> l >> r;

    for (ll i = 60; i >= 0; i--) {
        if (((l >> i) & 1) != ((r >> i) & 1)) return (i + 1);
    }

    return 0;
}

int main(){
    IOS

    cout << (1LL << solve()) - 1;

    return 0;
}