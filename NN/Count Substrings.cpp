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

int t, n, cont;
string a;

int main(){
    IOS

    cin >> t;
    
    while (t--) {
        cont = 0;

        cin >> n;
        cin >> a;

        for(auto it : a){
            if(it == '1') cont++;
        }

        cout << (((ll)cont)*(cont+1))/2 << endl;
    }
    
    return 0;
}