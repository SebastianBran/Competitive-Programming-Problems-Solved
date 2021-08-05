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

int t, n, q, c;
string s;

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n >> q >> s;
        
        
        map<char, int> a;
        for (auto it : s) {
            a[it]++;
        }

        while (q--) {
            int cont = 0;
            cin >> c;

            for (auto it : a) {
                if(it.second > c) {
                    cont += it.second - c;
                }
            }

            cout << cont << endl;
        }
    }

    return 0;
}