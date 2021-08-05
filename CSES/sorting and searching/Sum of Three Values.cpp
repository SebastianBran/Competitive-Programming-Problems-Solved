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

int n, x;

void solve() {
    cin >> n >> x;

    vector<pair<ll, int>> a(n);

    fore (i, 0, n) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    ordenar(a);

    fore (i, 0, n) {
        int res = x - a[i].first;
        int l = 0, r = n - 1;

        while (l != r) {
            if (l != i && r != i && a[l].first + a[r].first == res) {
                cout << a[l].second << " " << a[i].second << " " << a[r].second << endl;
                return;
            }
            if (a[l].first + a[r].first > res) r--;
            else l++;
        }
    }

    cout << "IMPOSSIBLE" << endl;
}

int main(){
    IOS

    solve();

    return 0;
}