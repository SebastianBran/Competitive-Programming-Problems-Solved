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

const int MAXN = 100;
int n, m, a, b, aux;
vector<bool> v(MAXN, 0);

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    cin >> n >> m;

    int g = gcd(n, m);

    cin >> a;
    fore(i,0,a) {
        cin >> aux;
        v[aux % g] = 1;
    }

    cin >> b;
    fore(i,0,b) {
        cin >> aux;
        v[aux % g] = 1;
    }

    fore(i,0,g) {
        if(v[i] == false) {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}