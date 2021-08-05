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

vi a(4);

bool isRectangel(vi a) {
    do {
        if (abs(a[1] - a[0]) < a[2] && a[1] + a[0] > a[2]) return true;
    } while (next_permutation(all(a)));
    
    return false;
}

bool isSegment(vi a) {
    do {
        vector<int> seg = vector<int>(a.begin(), a.begin() + 3);
        ordenar(seg);
        if (seg[0] + seg[1] == seg[2]) return true;
    } while (next_permutation(all(a)));
    
    return false;
}

void solve() {
    cin >> a[0] >> a[1] >> a[2] >> a[3];

    ordenar(a);

    if (isRectangel(a)) cout << "TRIANGLE" << endl;
    else if (isSegment(a)) cout << "SEGMENT" << endl;
    else cout << "IMPOSSIBLE" << endl;
}

int main(){
    IOS

    solve();

    return 0;
}