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

int n;
ll x;

ll sumMax(vector<ll>& a) {
    ll maxi = 0;
    
    fore (i,0,n) {
        fore (j,i,n) {
            ll current = 0;
            fore (k,i,j + 1) current ^= a[k];
            if (current > maxi) maxi = current;
        }
    }

    return maxi;
}

int main(){
    IOS

    cin >> n;

    vector<ll> a(n);

    fore (i,0,n) cin >> a[i];

    cout << (ll)sumMax(a);
    
    return 0;
}