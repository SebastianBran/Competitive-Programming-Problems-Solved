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

int n, t, aux;
stack<int> a;
stack<int> maxis;

int main(){
    IOS

    maxis.push(0);
    cin >> n;

    while (n--) {
        cin >> t;
        if (t == 1) {
            cin >> aux;
            a.push(aux);
            if (aux >= maxis.top()) maxis.push(aux);
        }
        else if (t == 2) {
            if (a.top() == maxis.top()) maxis.pop();
            a.pop();
        }
        else if (t == 3) {
            cout << maxis.top() << endl;
        }
    }

    return 0;
}