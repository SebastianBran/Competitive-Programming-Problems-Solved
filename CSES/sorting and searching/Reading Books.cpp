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

int n;

void solve() {
    cin >> n;

    ll maxi = 0, sum = 0, aux;

    fore (i, 0, n) {
        cin >> aux;
        maxi = max(maxi, aux);
        sum += aux;
    }

    cout << max(sum, maxi * 2) << endl;
}

int main(){
    IOS

    solve();

    return 0;
}