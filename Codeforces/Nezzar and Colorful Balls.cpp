#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define forell(i,x,n) for(long long i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
#define sz(x) (int)x.size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vii;

int t, n;

void solve() {
    cin >> n;

    map<int, int> a;

    int aux;

    fore(i,0,n) {
        cin >> aux;
        a[aux]++;
    }

    int maxi = 0;
    for (auto it : a) {
        maxi = max(maxi, it.second);
    }

    cout << maxi << endl;
}

int main(){
    IOS

    cin >> t;
    
    while (t--)
        solve();    

    return 0;
}