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
int n;
char s, d;

void hanoi(int n, char s, char p, char d) {
    if (n > 1) hanoi(n - 1, s, d, p); 
    cout << "Move from " << s << " to " << d << "." << endl;
    if (n > 1) hanoi(n - 1, p, s, d);
}

void solve() {
    cin >> n >> s >> d;

    vector<char> c = {'A', 'B', 'C'};
    c.erase(find(all(c), s));
    c.erase(find(all(c), d));

    hanoi(n, s, c[0], d);
    cout << "Done!" << endl;
}

int main(){
    IOS

    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}