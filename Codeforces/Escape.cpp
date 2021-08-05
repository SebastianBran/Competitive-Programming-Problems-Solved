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

int v1, v2, t, f, c;

void solve() {
    cin >> v1 >> v2 >> t >> f >> c;

    int cont = 0;
    double pos1 = t * v1, time;

    if (v1 >= v2) {
        cout << 0 << endl;
        return;
    }
    else {
        while (pos1 < c) {
            time = pos1 / double(v2 - v1);
            pos1 += time * (double)v1;

            if (pos1 < c) {
                cont++;
                pos1 += double(f + time) * (double)v1;
            }
        }
    }

    cout << cont << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}