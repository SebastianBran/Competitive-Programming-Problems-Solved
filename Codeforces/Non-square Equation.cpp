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

ll sum(ll x) {
    string num = to_string(x);
    ll sum = 0;
    for (auto it : num) sum += (it - '0');
    return sum;
}

ll solve() {
    ll maxi = sqrtl(n) + 1;
   
    forell(i, max(1LL, maxi - 1000), maxi + 1) {
        if (i * i + sum(i) * i == n) {
            return i;
        }
    }

    return -1;
}

int main(){
    IOS

    cin >> n;

    cout << solve();

    return 0;
}