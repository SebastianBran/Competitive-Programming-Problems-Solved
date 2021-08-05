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

int n, m;
int l1, l2;
int cont = 0;

int main(){
    IOS

    cin >> n >> m;

    l1 = min((int)sqrt(n), m);
    l2 = min((int)sqrt(m), n);

    fore (i,0,l1 + 1) {
        fore (j,0,l2 + 1) {
            if ((i*i + j) == n && (i + j*j) == m) {
                cont++;
            }
        }
    }

    cout << cont;

    return 0;
}