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
string s;

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> s;
        map<char, int> a;

        for(auto it : s) {
            a[it]++;
        }

        int c1 = min(a['L'], a['R']);
        int c2 = min(a['U'], a['D']);

        if (c1 == 0 && c2 == 0) cout << 0 << endl;
        else if (c1 == 0 || c2 == 0) {
            cout << 2 << endl;
            if (c1 == 0) cout << "UD" << endl;
            else cout << "LR" << endl;
        }
        else {
            cout << c1 * 2 + c2 * 2 << endl;
            string rute;
            rute += string(c2, 'U');
            rute += string(c1, 'R');
            rute += string(c2, 'D');
            rute += string(c1, 'L');
            cout << rute << endl;
        }
    }

    return 0;
}