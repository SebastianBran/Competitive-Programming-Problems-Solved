#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;

int q, a, b, n, s;

int main(){
    IOS

    cin >> q;

    while (q--) {
        cin >> a >> b >> n >> s;

        int aux = (s / n);
        int t = min(a, aux) * n + b;

        if (t >= s) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}