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

int n;

int main() {

    cin >> n;

    vi a(n);

    fore (i,0,n) cin >> a[i];

    int maxi = 0;
    fore (i,0,n) {
        int cont = 1;
        for (int j = i - 1; j >= 0; j--) {
            if (a[j] <= a[i] && a[j] <= a[j + 1]) cont++;
            else break;
        }
        for (int j = i + 1; j < n; j++) {
            if (a[j] <= a[i] && a[j] <= a[j - 1]) cont++;
            else break;
        }
        maxi = max(maxi, cont);
    }

    cout << maxi;

    return 0;
}