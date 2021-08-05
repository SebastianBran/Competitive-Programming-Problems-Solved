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

int n, f;
ll sum = 0, k, l;
priority_queue<ll> a;
ll bnf;

int main(){
    IOS

    cin >> n >> f;

    fore(i,0,n) {
        cin >> k >> l;
        sum += min(k, l);
        bnf = min(2*k, l) - min(k, l);
        a.push(bnf);
    }

    fore (i,0,f) {
        sum += a.top();
        a.pop();
    }

    cout << sum << endl;
    
    return 0;
}