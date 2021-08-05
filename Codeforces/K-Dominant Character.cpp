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

void solve() {
    cin >> s;

    map<char, pair<int,int>> m;

    fore (i,0,sz(s)) {
        if (m.count(s[i])) {
            m[s[i]].second = max(m[s[i]].second, i - m[s[i]].first);
            m[s[i]].first = i;
        }
        else {
            m[s[i]] = {i, i + 1};
        }
    }

    int mini = (sz(s) / 2) + 1;
    for(auto it : m) {
        mini = min(mini, max(sz(s) - it.second.first, it.second.second));
    }

    cout << mini << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}