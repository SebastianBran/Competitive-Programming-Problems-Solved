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

int n, l, r;    
int mid;

int solve2(int l, int r) {
    if(l >= r) return -1;
    int aux;
    cout << "? " << l + 1 << " " << r + 1 << endl;
    cin >> aux;
    return aux - 1;
}

void solve() {
    int mit, secondmax;
    while (r - l > 1) {
        mit = (r + l) / 2;
        secondmax = solve2(l, r - 1);
        if (secondmax < mit) {
            if(solve2(l, mit - 1) == secondmax) r = mit;
            else l = mit;
        }
        else {
            if(solve2(mit, r - 1) == secondmax) l = mit;
            else r = mit;
        }
    }

    cout << "! " << r << endl;
}

int main(){
    cin >> n;
    l = 0, r = n;
    solve();    

    return 0;
}