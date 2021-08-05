#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define forell(i,x,n) for(long long i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vii;

int n;

void solve() {
    cin >> n;

    int a = n / 1234567;
    int b = n / 123456;

    fore (i, 0, a + 1) {
        fore (j, 0, b + 1) {
            int ans = n - i * 1234567 - j * 123456;
            if (ans >= 0 && ans % 1234 == 0) {
                cout << "YES" << endl;
                return;
            }
        } 
    }
    
    cout << "NO" << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}