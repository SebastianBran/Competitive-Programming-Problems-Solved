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

int t, n;

ll getSum(vi& a) {
    int ans = -1e9, sum = 0;
    for (auto it : a) {
        sum += it;
        ans = max(ans, sum);
    }
    return ans;
}

ll maximunSubarraySum(vi& a) {
    if (a.empty()) return -1e9;
    if (a.size() == 1) return a[0];

    int len = a.size();
    vi L = vi(a.begin(), a.begin() + (len / 2));
    vi R = vi(a.begin() + (len / 2), a.end());

    ll ans = max(maximunSubarraySum(L), maximunSubarraySum(R));
    reverse(all(L));
    return max(ans, getSum(L) + getSum(R));
}

ll maximunSubsencuenceSum(vi& a) {
    int ans = -1e9;
    for (auto it : a)
        ans = max({ans, ans + it, it});
    return ans;
}

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n;
        vi a(n);
        fore (i, 0, n) cin >> a[i];
        cout << maximunSubarraySum(a) << " " << maximunSubsencuenceSum(a) << endl;
    }

    return 0;
}