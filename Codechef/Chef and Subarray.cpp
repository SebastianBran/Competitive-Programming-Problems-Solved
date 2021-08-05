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

int n, a, cont = 0, maxi = 0;

int main(){
    IOS

    cin >> n;

    while ( n-- ) {
        cin >> a;
        if(a != 0) cont++;
        else cont = 0;

        maxi = max(maxi, cont);
    }

    cout << maxi;
    
    return 0;
}