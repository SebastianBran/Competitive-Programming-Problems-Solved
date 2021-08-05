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

ll t;
vector<ll> a;

int main(){
    IOS

    for(ll i = 3; i <= (ll)1e13; i*=2) {
        a.pb(i);
    }

    cin >> t;

    for (auto it : a) {
        if (it < t) {
            t -= it;
        }
        else {
            cout << (it + 1) - t;
            break;
        }
    }
    
    return 0;
}