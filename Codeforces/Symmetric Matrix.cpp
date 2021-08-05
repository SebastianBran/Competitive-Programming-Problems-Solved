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

int t, n, m;
int mt[2][2];
bool ok;

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n >> m;

        ok = false;
        fore (i,0,n) {
            fore (j,0,2) {
                fore (k,0,2) {
                    cin >> mt[j][k];
                }
            }

            if (mt[0][1] == mt[1][0]) ok = true;
        }

        if (ok && m % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    } 

    return 0;
}