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

int n, t;
string s;

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n;

        int aux = 0;
        while (n--) {
            cin >> s;
            if (s == "lxh")  aux++;
        }

        if (aux%2 == 0) cout << "hhb" << endl;
        else cout << "lxh" << endl;
    }

    return 0;
}