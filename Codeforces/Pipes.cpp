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
typedef vector<pair<int,int>> vii;

int q, n;

void solve() {
    cin >> q;

    while(q--) {
        cin >> n;

        vector<vector<char>> a(2, vector<char>(n));

        fore(i,0,n) cin >> a[0][i];
        fore(i,0,n) cin >> a[1][i];

        int i = 0, j = 0;
        char dir = 'r';
        bool ok = true;

        while (j < n) {
            if (a[i][j] >= '1' && a[i][j] <= '2') {
                if (dir == 'r') j++;
                else {
                    ok = false;
                    break;
                }
            }
            else {
                if (dir == 'r') {
                    if (i == 0) {
                        i++;
                        dir = 'd';
                    }
                    else {
                        i--;
                        dir = 'u';
                    }
                }
                else {
                    j++;
                    dir = 'r';
                }
            }
        }

        if (ok && i == 1 && j == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main(){
    IOS

    solve();    

    return 0;
}
