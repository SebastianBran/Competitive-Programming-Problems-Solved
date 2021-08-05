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

int t, n, aux;

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n;

        map<int, vi> a;

        fore(i,0,n) cin >> aux, a[aux].push_back(i);
        
        int mini = 1e9;
        for (auto it : a) {
            int cont = 0, pos = -1;
            for (int i = 0; i < it.second.size(); i++) {
                if (i == it.second.size() - 1) {
                    if (it.second[i] < n - 1) cont++;
                }
                if (it.second[i] - pos > 1) cont++;
                pos = it.second[i];
            }
            mini = min(mini, cont);
        }

        cout << mini << endl;
    }

    return 0;
}