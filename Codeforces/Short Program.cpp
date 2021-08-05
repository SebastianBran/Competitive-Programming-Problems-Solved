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

int n, x;
char c;

void solve() {
    cin >> n;

    int aux1 = 0, aux2 = 1023;
    fore (i, 0, n) {
        cin >> c >> x;
        if (c == '|') {
            aux1 |= x;
            aux2 |= x;
        }
        else if (c == '^') {
            aux1 ^= x;
            aux2 ^= x;
        }
        else {
            aux1 &= x;
            aux2 &= x;
        }
    }

    cout << 3 << endl;
    cout << "^ " << ((aux1 ^ 0) & (aux2 ^ 1023)) << endl;
    cout << "| " << (aux1 & aux2) << endl;
    cout << "& " << (aux1 | aux2) << endl;
}

int main(){
    IOS

    solve();

    return 0;
}