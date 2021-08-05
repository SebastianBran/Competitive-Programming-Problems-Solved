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

int t, n, k;

bool valid(string& str, int k) {
    fore (i, 0, k) {
        int ctn = count(all(str), char('a' + i));
        if (ctn == 1) return false;
    }
    return true;
}

void enumerate(string str, int k, int n) {
    if (n == 0) {
        if (valid(str, k)) cout << str << endl;
        return;
    }
    
    fore (i, 0, k) {
        enumerate(str + string(1, 'a' + i), k, n - 1);
    }
}

void solve() {
    cin >> n >> k;
    enumerate("", k, n);
    cout << "---" << endl;
}

int main(){
    IOS

    cin >> t;

    while (t--)
        solve();

    return 0;
}