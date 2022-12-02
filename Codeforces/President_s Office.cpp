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

int n, m;
char c;
set<char> s;

int main(){
    IOS

    cin >> n >> m >> c;

    vector<vector<char>> a(n + 2);
    fore(i,0,n + 2) a[i].resize(m + 2, '.');

    fore(i,1,n + 1) {
        fore (j,1,m + 1) {
            cin >> a[i][j];
        }
    }

    fore(i,1,n + 1) {
        fore (j,1,m + 1) {
            if (a[i][j] == c) {
                if (a[i - 1][j] != c && a[i - 1][j] != '.') s.insert(a[i - 1][j]);
                if (a[i][j - 1] != c && a[i][j - 1] != '.') s.insert(a[i][j - 1]);
                if (a[i][j + 1] != c && a[i][j + 1] != '.') s.insert(a[i][j + 1]);
                if (a[i + 1][j] != c && a[i + 1][j] != '.') s.insert(a[i + 1][j]);
            }
        }
    }

    cout << s.size();
    
    return 0;
}