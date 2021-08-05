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
    cout << "? " << l << " " << r << endl;
    int aux;
    cin >> aux;
    return aux;
}

void solve() {
    int secondmax = solve2(1, n);
    if(secondmax == 1 || solve2(1, secondmax) != secondmax) {
        l = secondmax, r = n;

        while(r - l > 1) {
            mid = (l + r) / 2;
            if(solve2(secondmax, mid) == secondmax) r = mid;
            else l = mid;
        }

        cout << "! " << r << endl;
    }
    else {
        l = 1, r = secondmax;

        while(r - l > 1) {
            mid = (l + r) / 2;
            if(solve2(mid, secondmax) == secondmax) l = mid;
            else r = mid;
        }

        cout << "! " << l; 
    }
}

int main(){
    cin >> n;
    l = 1, r = n;
    solve();    

    return 0;
} 