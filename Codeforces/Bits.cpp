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

ll n, l, r;

ll solve(ll l, ll r) {
    if (l == r) return l;

    int max_exp = 0;
    for (int i = 0; i < 61; i++) {
        if ((1LL << i) <= r) max_exp = i;
        else break;
    }

    if ((1LL << max_exp) <= l) return solve(l - (1LL << max_exp), r - (1LL << max_exp)) + (1LL << max_exp);
    else if ((1LL << (max_exp + 1)) - 1 <= r) return (1LL << (max_exp + 1)) - 1;
    else return (1LL << max_exp) - 1;
}

int main(){
    IOS

    cin >> n;

    while (n--) {
        cin >> l >> r;
        cout << solve(l, r) << endl;
    }

    return 0;
}