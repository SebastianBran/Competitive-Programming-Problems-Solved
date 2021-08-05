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

ll a;

int main(){
    IOS

    cin >> a;

    ll aux = a%(ll)6;
    
    if(aux == 0 || aux == 1 || aux == 3 || aux == 6) cout << "yes" << endl;
    else cout << "no" << endl;
    
    return 0;
}