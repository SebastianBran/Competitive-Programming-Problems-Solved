#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define forell(i,x,n) for(long long i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
#define sz(x) (int)x.size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vii;

int n, x;

void solve() {
    cin >> n >> x;

    deque<int> a(n);

    fore (i,0,n) cin >> a[i];

    ordenar(a);

    int ans = 0;
    while (!a.empty()) {
        if (a.size() > 1 && a.front() + a.back() <= x) {
            ans++;
            a.pop_front();
            a.pop_back();
        }
        else {
            ans++;
            a.pop_back();
        }  
    }

    cout << ans++;
}   

int main(){
    IOS

    solve();    

    return 0;
}