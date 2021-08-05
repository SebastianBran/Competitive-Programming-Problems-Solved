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

string s;

void solve() {
    cin >> s;

    stack<char> a;

    int maxi = 0;
    fore (i,0,s.size()) {
        if (a.empty()) a.push(s[i]);
        else {
            if (a.top() == s[i]) a.push(s[i]);
            else {
                a = stack<char>();
                a.push(s[i]);
            }
        }
        maxi = max(maxi, (int)a.size());
    } 

    cout << maxi;
}

int main(){
    IOS

    solve();    

    return 0;
}