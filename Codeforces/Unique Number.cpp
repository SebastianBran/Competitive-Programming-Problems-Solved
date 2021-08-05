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

int t, x;
vi a = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

int main(){
    IOS
    cin >> t;

    while (t--) {
        cin >> x;

        if (x > 45) cout << "-1" << endl;
        else {
            pair<int, string> aux = { 1e9, "999999999" };
            for (int i = 0; i < (1 << 9); i++) {
                int sum = 0; 
                string s;
                for (int j = 0; j < 9; j++) {
                    if ((i >> j) & 1) {
                        sum += a[j];
                        s += to_string(a[j]);
                    }
                }
                if (sum == x && stoi(s) < stoi(aux.second)) {
                    aux = { sum, s };
                }
            }
            cout << aux.second << endl;
        }
    }
    
    return 0;
}