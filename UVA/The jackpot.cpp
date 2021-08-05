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

int getPreffix(vi& a) {
    int curr = 0, ans = -1e9;

    for (auto it : a) {
        curr += it;
        ans = max(ans, curr);
    }

    return ans;
}

int solve(vi& a) {
    if (a.empty()) return -1e9;
    if (a.size() == 1) return a[0];

    int len = a.size();

    vi L = vi(a.begin(), a.begin() + len / 2);
    vi R = vi(a.begin() + len / 2, a.end());

    int ans = max(solve(L), solve(R));
    reverse(all(L));
    return max({ans, getPreffix(L) + getPreffix(R)});
}

int main(){
    IOS

    while (cin >> n && n != 0) {
        vi a(n);
        fore (i, 0, n) cin >> a[i];
        
        int ans = solve(a);

        if (ans <= 0) cout << "Losing streak." << endl;
        else cout << "The maximum winning streak is " << ans << "." << endl;
    }

    return 0;
}