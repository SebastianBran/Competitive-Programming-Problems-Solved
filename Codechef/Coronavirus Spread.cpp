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

int t;
int n;
 
pair<int,int> cant (vi& a) {
    int mini = 1e5, maxi = 0;

    fore (i,0,a.size()) {
        int c1 = 0, c2 = 0;

        for (int j = i - 1; j >= 0; j--) {
            if ((a[j + 1] - a[j]) <= 2) c1++;
            else break;
        }
        fore (k,i+1,a.size()) {
            if ((a[k] - a[k - 1]) <= 2) c2++;
            else break;
        }

        mini = min(mini, c1 + c2 + 1);
        maxi = max(maxi, c1 + c2 + 1);
    }

    return {mini, maxi};
}

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n;

        vi a(n);

        fore (i,0,n) cin >> a[i];

        pair<int,int> x = cant(a);

        cout << x.first << " " << x.second << endl;
    }
    
    return 0;
}