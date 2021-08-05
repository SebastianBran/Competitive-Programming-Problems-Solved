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
string s;

void solve() {
    cin >> n >> s;

    string a = "1", aux;

    if (s[0] == '1') aux += '2';
    else aux += '1';

    fore (i,1,n) {
        if (aux[i - 1] == '2') {
            if (s[i] == '1') a += '0';
            else a += '1';
            aux += '1';
        }
        else if (aux[i - 1] == '1') {
            if (s[i] == '1') {
                a += '1';
                aux += '2';
            }
            else {
                a += '0';
                aux += '0';
            }
        }
        else {
            a += '1';
            if (s[i] == '1') aux += '2';
            else aux += '1';
        }
    }

    cout << a << endl;
}

int main(){
    IOS

    cin >> t;

    while (t--) {
        solve();    
    }

    return 0;
}