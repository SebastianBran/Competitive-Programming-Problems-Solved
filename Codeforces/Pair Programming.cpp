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

int t, k, n, m;

void solve() {
    cin >> k >> n >> m;

    vi a(n), b(m), secuence;

    fore (i, 0, n) cin >> a[i];
    fore (i, 0, m) cin >> b[i];

    int i = 0, j = 0;
    bool is = true;
    while (i < a.size() || j < b.size()) {
        if (i < a.size() && j < b.size()) {
            if (a[i] == 0) {
                k++;
                secuence.pb(a[i]);
                i++;
            }
            else if (b[j] == 0) {
                k++;
                secuence.pb(b[j]);
                j++;
            }
            else {
                int mini = min(a[i], b[j]);
                if (mini <= k) {
                    secuence.pb(mini);
                    if (a[i] == mini) i++;
                    else j++;
                }
                else {
                    is = false;
                    break;
                }
            }
        }
        else if (i < a.size()) {
            if (a[i] == 0) k++;
            else if (a[i] > k) {
                is = false;
                break;
            }

            secuence.pb(a[i]);
            i++;
        }
        else {
            if (b[j] == 0) k++;
            else if (b[j] > k) {
                is = false;
                break;
            }

            secuence.pb(b[j]);
            j++;
        }
    }

    if (!is) cout << -1;
    else for(auto it : secuence) cout << it << " ";
    cout << endl;
}

int main(){
    IOS

    cin >> t;

    while (t--)
        solve();

    return 0;
}