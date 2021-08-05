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

const int INF = 1e9 + 7;
int n, a, b, c;
vi v;

int solve(int pos, int A, int B, int C) {
    if(pos == n) {
        if (min({A , B, C}) > 0) return abs(A - a) + abs(B - b) + abs(C - c);
        else return INF;
    }

    int x = solve(pos + 1, A, B, C);
    int y = solve(pos + 1, A + v[pos], B, C) + 10;
    int z = solve(pos + 1, A, B + v[pos], C) + 10;
    int w = solve(pos + 1, A, B, C + v[pos]) + 10;

    return min({x, y, z, w});
}

int main(){
    IOS

    cin >> n >> a >> b >> c;
    v.resize(n);
    fore (i, 0, n) cin >> v[i];

    cout << solve(0, 0, 0, 0) - 30;

    return 0;
}