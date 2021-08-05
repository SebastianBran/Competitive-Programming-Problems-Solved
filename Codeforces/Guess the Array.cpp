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

    vi res(n);
    int abc[3], aux;

    fore (i, 1, 4) {
        cout << "? " << i << " " << (i % 3) + 1 << endl;
        cin >> aux;
        abc[i - 1] = aux;
    }

    res[0] = (abc[0] - abc[1] + abc[2]) / 2;
    res[1] = abc[0] - res[0];
    res[2] = abc[1] - res[1];

    fore (i, 3, n) {
        cout << "? " << i << " " << (i % n) + 1 << endl;        
        cin >> aux;
        res[i] = aux - res[i - 1];
    }

    cout << "! ";
    fore (i, 0, n) cout << res[i] << " ";
}

int main(){
    // IOS

    solve();

    return 0;
}