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

int n, k;

void solve() {
    cin >> n >> k;
    vi a(n);

    fore(i,0,n) cin >> a[i];

    set<int> s;
    deque<int> d;

    fore(i,0,n) {
        if (!s.count(a[i])) {
            d.push_front(a[i]);
            s.insert(a[i]);
            if (d.size() == k + 1) { 
                s.erase(d.back());
                d.pop_back();
            }
        }
    }

    cout << d.size() << endl;
    fore(i,0,d.size()) cout << d[i] << " ";
}

int main(){
    IOS

    solve();    

    return 0;
}