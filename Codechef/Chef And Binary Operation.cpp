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

int t;
string a, b;

bool invalid(string& a) {
    fore (i,1,a.size()) if (a[i - 1] != a[i]) return false;
    return true;
}

int move(string& a, string& b) {
    int cont1 = 0, cont2 = 0;
    fore (i,0,a.size()) {
        if (a[i] != b[i]) {
            if (a[i] == '1') cont1++;
            else cont2++;
        }
    }

    return max(cont1, cont2);
}

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> a >> b;

        if (a == b) cout << "Lucky Chef" << endl << 0 << endl;
        else if (invalid(a)) cout << "Unlucky Chef" << endl;
        else cout << "Lucky Chef" << endl << move(a, b) << endl;
    }
    
    return 0;
}