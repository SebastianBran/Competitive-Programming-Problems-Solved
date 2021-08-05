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

int t, c1, c2, c3, c4;
string s;

int main(){
    IOS

    cin >> t;

    while ( t-- ) {
        c1 = c2 = c3 = c4 = 0;
        cin >> s;
        fore (i, 0, s.size()) {
            if (i%2 == 0) {
                if(s[i] == '-') c1++;
                else c2++;
            }
            else {
                if(s[i] == '-') c3++;
                else c4++;
            }
        }

        cout << min(c1 + c4, c2 + c3) << endl;
    }
    
    return 0;
}