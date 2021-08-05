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

int n;

bool islucky(int a) {
    string s = to_string(a);
    for (auto it : s) if (it != '4' && it != '7') return false;
    return true;
}

int main(){
    IOS

    cin >> n;

    fore (i,1,n+1) {
        if (islucky(i)) {
            if (n % i == 0) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;

    return 0;
}