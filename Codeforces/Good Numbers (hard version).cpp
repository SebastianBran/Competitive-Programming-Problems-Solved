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
typedef vector<pair<int,int>> vii;

int q;
ll n;

void solve() {
    cin >> q;

    while(q--) {
        cin >> n;

        deque<int> a;
        
        ll aux = n;
        while(aux > 0) {
            a.push_front(aux % 3ll);
            aux /= 3ll;
        }

        int dos = -1;
        for(int i = 0; i < a.size(); i++) {
            if (a[i] == 2) {
                dos = i;
                break;
            }
        }

        if (dos == -1) {
            cout << n << " " << endl;
        }
        else {
            a.push_front(0);
 
            int cero = -1;
            dos++;
            for(int i = dos - 1; i >= 0; i--) {
                if (a[i] == 0) {
                    cero = i;
                    break;
                }
            }
            a[cero] = 1;

            for(int i = cero + 1; i < a.size(); i++) a[i] = 0;

            ll ans = (ll)a.back();
            ll exp = 3;

            for(int i = a.size() - 2; i >= 0; i--) {
                ans += exp * (ll)a[i];
                exp *= 3ll;
            }

            cout << ans << endl;
        }
    }
}

int main(){
    IOS

    solve();    

    return 0;
}