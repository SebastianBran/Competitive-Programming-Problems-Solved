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

const int D = 367;
int n, a, b;
vi v1(D, 0), v2(D, 0);
char c;

void solve() {
    cin >> n;

    fore(i,0,n) {
        cin >> c >> a >> b;
        if(c == 'F') {
            v1[a - 1] += 1;
            v1[b] -= 1; 
        }
        else {
            v2[a - 1] += 1;
            v2[b] -= 1;
        }
    }

    fore(i,1,D) {
        v1[i] += v1[i - 1];
        v2[i] += v2[i - 1];
    }

    int maxi = 0;
    fore(i,0,D) maxi = max(maxi, 2 * min(v1[i], v2[i]));
    
    cout << maxi << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}