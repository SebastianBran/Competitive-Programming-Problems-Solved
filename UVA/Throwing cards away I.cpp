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

int n, aux;

int main(){
    IOS

    while (cin >> n && n != 0) {
        queue<int> a;

        fore (i, 1, n + 1) a.push(i);

        cout << "Discarded cards:";
        
        while (a.size() > 1) {
            cout << " " << a.front();
            if (a.size() > 2) cout << ",";
            a.pop();
            a.push(a.front());
            a.pop();
        }

        cout << endl << "Remaining card: " << a.front() << endl;
        a.pop();
    }

    return 0;
}