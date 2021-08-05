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

const int MAXN = 1e9;
int n, k;

bool check(int num) {
    int exp = 1, ans = 0;
    fore (i, 0, 31) {
        if (num / exp == 0 || ans >= n) break;
        ans += num / exp;
        exp = exp * k;
    }
    return ans >= n;
}

int solve() {
    int l = 0, r = MAXN;
    int mit;
    while (l < r) {
        mit = l + (r - l) / 2;
        if (check(mit)) r = mit;
        else l = mit + 1;
    }
    return l;
}

int main(){
    IOS

    cin >> n >> k;
    cout << solve();

    return 0;
}