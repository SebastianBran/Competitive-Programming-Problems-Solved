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

int main(){
    IOS

    cin >> t;

    while (t--) {
        map<int, int> a;
        fore(i,0,3) {
            int aux;
            cin >> aux, a[aux]++;
        }

        vector<pair<int,int>> b;
        for(auto it : a) b.pb(it);
        int sum = 0;

        if (b.size() == 1) {
            sum = 0;
        }
        else if (b.size() == 2) {
            if (b[0].first != b[1].first) b[0].first++;
            if (b[1].first != b[0].first) b[1].first--;

            sum += abs(b[0].first - b[1].first) * 2;
        }
        else {
            if (b[0].first != b[1].first) b[0].first++;
            if (b[2].first != b[1].first) b[2].first--;
            if (b[1].first != b[0].first) b[1].first--;
            else if (b[1].first != b[2].first) b[1].first++;

            sum += abs(b[0].first - b[1].first) + abs(b[1].first - b[2].first) + abs(b[0].first - b[2].first);
        }

        cout << sum << endl;
    }
    
    return 0;
}