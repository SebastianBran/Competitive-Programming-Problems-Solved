#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
#define sz(x) (int)x.size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;

int n, k;

void solve() {
    cin >> n >> k;

    vi a(n);
    int ind = -1;

    fore(i,0,n) {
        cin >> a[i];
        if (a[i] <= 0) {
            ind = i;
        }
    }

    int sum = 0;

    if (k >= ind + 1) {
        fore(i,0,ind + 1) sum += abs(a[i]);
        fore(i,ind + 1,n) sum += a[i];
        
        k -= (ind + 1);

        if (k % 2) {
            if (ind + 1 > 0) {
                if (ind < n - 1) {
                    int mini = min(abs(a[ind]), a[ind + 1]);
                    sum -= 2 * mini;
                }
                else sum += 2 * a[ind];
            }
            else sum -= 2 * a[0];
        }
    }   
    else {
        fore(i,0,k) sum += abs(a[i]);
        fore(i,k,n) sum += a[i];
    }
 
    cout << sum;
}

int main(){
    IOS

    solve();    

    return 0;
}