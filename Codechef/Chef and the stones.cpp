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

int t;
ll n1, n2, m;

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n1 >> n2 >> m;

        ll x = (m*(m+1))/2;

        if (x > min(n1, n2)) {
            cout << max(n1, n2) - min(n1, n2) << endl;
        }
        else {
            cout << n1 + n2 - (ll)2*x << endl;
        }
    }
    
    return 0;
}