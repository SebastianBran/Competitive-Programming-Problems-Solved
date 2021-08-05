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
const ll MOD = 1e9 + 7;
ll n;

int main(){
    IOS

    cin >> t;

    while(t--){
        cin >> n;
        ll sum = ((n % MOD) * (n % MOD));
        cout << sum % MOD << endl;
    }
    
    return 0;
}