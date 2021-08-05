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

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n;

        vector<pair<int,int>> a(n);

        fore(i,0,n) cin >> a[i].first >> a[i].second;

        ordenar(a);

        bool es = true;
        string s;
        fore(j,0,a[0].first) s += 'R';
        fore(j,0,a[0].second) s += 'U'; 
        fore(i,1,n) {
            if (a[i - 1].first < a[i].first && a[i - 1].second > a[i].second) {
                es = false;
                break;
            }
            fore(j,a[i - 1].first,a[i].first) s += 'R';
            fore(j,a[i - 1].second,a[i].second) s += 'U';
        }

        if (es) {
            cout << "YES" << endl;
            cout << s << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}