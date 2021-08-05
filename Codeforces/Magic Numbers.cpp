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

string s;

bool solve() {
    cin >> s;

    int cont = 0;
    if (s[0] == '4') return false;
    fore(i,0,s.size()) {
        if (s[i] != '1' && s[i] != '4') return false;
        else if (s[i] == '4') cont++;
        else cont = 0;
        if (cont > 2) return false;
    }

    return true;
}

int main(){
    IOS

    if (solve()) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}