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

    int aux;
    // int c0 = 0, c1 = 0, c2 = 0;
    int c[3] = {0,0,0};
    fore(i,0,n) {
        cin >> aux;
        if(aux % 3 == 0) c[0]++;
        else if(aux % 3 == 1) c[1]++;
        else c[2]++;
    }

    int moves = 0;

    
    for(int i = 0; i < 6; i++) {
        if(c[i % 3] > n / 3) {
            int x = c[i % 3] - (n / 3);
            c[(i + 1) % 3] += x;
            moves += x;
            c[i % 3] = n / 3;
        }
    }

    cout << moves << endl;
}

int main(){
    IOS

    cin >> t;
    
    while(t--)
        solve();
    
    return 0;
}
