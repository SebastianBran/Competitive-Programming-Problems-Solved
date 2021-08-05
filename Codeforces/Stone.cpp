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

int n, k;

int main(){
    IOS

    cin >> n >> k;

    vector<ll> a(n);

    fore(i,0,n) cin >> a[i];

    ll maxi = *max_element(all(a));
    ll mini = *min_element(all(a));

    if (k == 0) {
        fore(i,0,n) cout << a[i] << " ";
    }
    else if (k%2) {
        fore(i,0,n) cout << maxi - a[i] << " ";
    }
    else {
        fore(i,0,n) cout << a[i] - mini << " ";
    }

    return 0;
}