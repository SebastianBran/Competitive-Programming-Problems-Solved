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

int n, k, aux, mini = 1e9, pos;

int main(){
    IOS

    cin >> n >> k;

    vi a(n+1);

    a[0] = 0;
    fore (i,0,n) {
        cin >> aux;
        a[i + 1] = aux + a[i];
    }

    fore (i,0,n - k + 1) {
        if ((a[i + k] - a[i]) < mini) {
            mini = a[i + k] - a[i];
            pos = i + 1;
        }
    }

    cout << pos;
    
    return 0;
}