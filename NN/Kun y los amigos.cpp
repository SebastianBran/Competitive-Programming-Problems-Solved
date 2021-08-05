#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;

int n, a, b, t;
vector<int> h(32, 0), m(32,0);

int main(){
    IOS

    cin >> n;

    while (n--) {
        cin >> t >> a >> b;

        if (t == 1) {
            h[a]++;
            h[b + 1]--;
        }
        else {
            m[a]++;
            m[b + 1]--;
        }
    }

    fore(i,1,32) {
        h[i] += h[i - 1];
        m[i] += m[i - 1];
    }

    int maxi = 0;
    fore(i,1,31) {
        maxi = max(maxi, 2*min(h[i], m[i]));
    }

    cout << maxi;
    
    return 0;
}