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

int n;
string s;

void solve() {
    cin >> n >> s;

    int cont = 0;

    fore(i,0,n) {
        if (i % 2 == 0) {
            if ((s[i] == 'a' && s[i + 1] != 'b') || (s[i] == 'b' && s[i + 1] != 'a')) {
                if (s[i] == 'a') s[i + 1] = 'b';
                else s[i + 1] = 'a';
                cont++;
            }
        }
    }

    cout << cont << endl << s;
}

int main(){
    IOS

    solve();    

    return 0;
}