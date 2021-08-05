#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
#define sz(x) (int)x.size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;

int n, aux;
set<int> s;

void solve() {
    cin >> n;

    fore(i,0,n) cin >> aux, s.insert(aux);

    if (s.size() > 3) cout << "NO" << endl;
    else {
        if (s.size() < 3) {
            cout << "YES" << endl;
            return;
        }

        int a[3], i = 0;

        for (auto it : s) a[i++] = it;

        if (a[1] - a[0] == a[2] - a[1]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main(){
    IOS

    solve();    

    return 0;
}