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

int t;
string a, b;

int gdc(int a, int b) {
    if (b == 0) return a;
    return gdc(b, a % b);
}

int mcd(int a, int b) {
    return (a * b) / gdc(a, b);
}

void solve() {
    cin >> a >> b;

    int len1 = sz(a);
    int len2 = sz(b);

    int mini = mcd(len1, len2);

    int x = mini / len1;
    int y = mini / len2;

    string s1, s2;
    fore (i,0,x) s1 += a;
    fore (i,0,y) s2 += b;

    fore(i,0,mini) {
        if (s1[i] != s2[i]) {
            cout << -1 << endl;
            return;
        }
    }

    cout << s1 << endl;
}

int main(){
    IOS

    cin >> t;

    while (t--) 
        solve();        

    return 0;
}
