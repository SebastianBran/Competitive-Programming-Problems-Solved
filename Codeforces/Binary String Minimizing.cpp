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

int q, n;
ll k;
string s;

int main(){
    IOS

    cin >> q;

    while (q--) {
        cin >> n >> k >> s;
        
        int pos1 = 0, pos2 = 0;
        for (int i = 0; i < n && k > 0; i++) {
            if (s[i] == '0') {
                fore(j,pos1,n) {
                    if(s[j] == '1') {
                        pos1 = j;
                        break;
                    }
                }

                if (pos1 < i) {
                    swap(s[i], s[(i - pos1) < k ? pos1 : (i - k)]);
                    k -= (i - pos1);
                }
            }
        }

        cout << s << endl;
    }
    
    return 0;
}