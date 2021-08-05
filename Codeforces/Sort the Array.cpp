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

int n;

int main(){
    IOS

    cin >> n;

    vi a(n);
    
    fore(i,0,n) cin >> a[i];

    int l, r;
    l = r = 0;
    fore(i,0,n - 1) {
        if (a[i] > a[i + 1]) {
            l = r = i;
            while (r < n - 1 && a[r] > a[r + 1]) {
                r++;
            }
            break;
        }
    }

    reverse(a.begin() + l, a.begin() + r + 1);

    if (is_sorted(all(a))) {
        cout << "yes" << endl;
        cout << l + 1 << " " << r + 1;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}