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

int t, n;
string s;

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n >> s;

        if (s.substr(0, 4) == "2020" || s.substr(n - 4, 4) == "2020" || 
            (s.substr(0,2) == "20" && s.substr(n - 2, 2) == "20") || (s.substr(0, 1) == "2" && s.substr(n - 3, 3) == "020")
            || (s.substr(0, 3) == "202" && s.substr(n - 1, 1) == "0")) {
                cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    
    return 0;
}