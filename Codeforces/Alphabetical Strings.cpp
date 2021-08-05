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

int t;
string s;

void solve() {
    cin >> s;
    
    int i = 0, j = s.size() - 1;
    char last = max(s[0], s[j]);
    
    bool is = true;

    if (j > (last - 'a') || j < (last - 'a')) is = false;

    while (i <= j && is) {
        if (s[i] == last) {
            i++;
            last -= 1;
        }
        else if (s[j] == last) {
            j--;
            last -= 1;
        }
        else {
            is = false;
        }
    }

    if (is) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    IOS

    cin >> t;
    
    while (t--) 
        solve();

    return 0;
}