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

const int MAXN = 100;
int n;
int m[MAXN][MAXN];

void init() {
    fore (i, 0, MAXN) 
        fore (j, 0, MAXN) 
            m[i][j] = 0;
}

bool solve() {
    init();

    cin >> n;

    char c;
    
    fore (i, 0, n) {
        fore (j, 0, n) {
            cin >> c;

            if (c == 'o') {
                if (i - 1 >= 0) m[i - 1][j]++;
                if (i + 1 < n) m[i + 1][j]++;
                if (j - 1 >= 0) m[i][j - 1]++;
                if (j + 1 < n) m[i][j + 1]++;
            }
        }
    }

    fore (i, 0, n) {
        fore (j, 0, n) {
            if (m[i][j] & 1) {
                return false;
            }
        }
    }

    return true;
}

int main(){
    IOS

    if (solve()) cout << "YES" << endl;
    else cout << "NO" << endl; 

    return 0;
}