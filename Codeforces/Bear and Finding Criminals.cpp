#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;

int n, p;

int main() {

    cin >> n >> p;

    vi a(n);
    fore (i,0,n) cin >> a[i];

    int cont = (a[p-1] == 1) ? 1 : 0;
    int i = p - 2, j = p;

    while (i >= 0 || j <= n - 1) {
        if (i >= 0 && j <= n - 1 && (a[i] + a[j]) == 2) {
            cont += 2;
        }
        else if ((i >= 0 && j > n - 1 && a[i] == 1) || (i < 0 && j <= n - 1 && a[j] == 1)) {
            cont += 1;
        }
        i--;
        j++;
    }

    cout << cont;

    return 0;
}