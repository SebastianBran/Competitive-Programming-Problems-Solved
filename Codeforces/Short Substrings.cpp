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
        queue<char> q;
        cin >> s;

        string sub;
        sub = s[0];

        fore (i,0,s.size()) {
            if (i % 2 == 1) {
                sub += s[i];
            }
        }

        cout << sub << endl;
    }

    return 0;
}