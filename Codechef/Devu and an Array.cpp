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

int n, q, mini, maxi, aux;

int main(){
    IOS

    cin >> n >> q;

    vi a(n);

    fore (i,0,n) cin >> a[i];

    mini = *min_element(all(a));  
    maxi = *max_element(all(a));

    while (q--) {
        cin >> aux;

        if (mini <= aux && aux <= maxi) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}