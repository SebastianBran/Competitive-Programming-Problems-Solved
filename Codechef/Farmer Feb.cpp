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

int t, x, y;
vi primos;
const int MAXN = 3001;
vector<bool> pr(MAXN, 1);

void criba() {
    pr[0] = pr[1] = 0;

    for (int i = 4; i < MAXN; i+=2) pr[i] = 0;

    for (int i = 3; i < MAXN; i++) {
        if(pr[i]) {
            primos.pb(i);
            for (int j = i*i; j < MAXN; j += 2*i) {
                pr[j] = 0;
            }
        }
    }
}

int main(){
    IOS

    criba();

    cin >> t;

    while ( t-- ) {
        cin >> x >> y;
        
        cout << *upper_bound(all(primos), x + y) - (x + y) << endl;
    }
    
    return 0;
}