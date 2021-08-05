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

int n, t, i, s;
int cont = 0;

void solve(int s, int t, int i) {
    if (s >= t) {
        cout << s << " " << t << endl;
        cont++;
    }
    else {
        int mid = (s + t) / 2;
        if (i <= mid) {
            cout << s << " " << t << endl;
            cont++;
            solve(s, mid, i);
        }
        else {
            cout << s << " " << t << endl;
            cont++;
            solve(mid + 1, t, i);
        }
    }
}

int main(){
    IOS

    cin >> n;

    while (n--) {
        cin >> s >> t >> i;
        cont = 0;
        if (i < s || i > t) cout << -1 << endl;
        else {
            solve(s, t, i);
            cout << cont << endl;
        }
    }
        

    return 0;
}