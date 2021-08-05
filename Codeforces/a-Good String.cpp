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

int solve(const string& s, char c) {
    if (sz(s) == 1) {
        if (s[0] != c) return 1;
        else return 0;
    }

    int len = sz(s);

    int contl = solve(string(s.begin(), s.begin() + len / 2), c + 1);
    contl += (len / 2 - count(s.begin() + len / 2, s.end(), c));

    int contr = solve(string(s.begin() + len / 2, s.end()), c + 1);
    contr += (len / 2 - count(s.begin(), s.begin() + len / 2, c));

    return min(contl, contr);
}

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n >> s;
        cout << solve(s, 'a') << endl; 
    }   

    return 0;
}