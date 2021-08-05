#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
#define sz(a) (int)a.size() 
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;

string s;

void solve() {
    cin >> s;

    map<char,int> a;

    for(auto it : s) {
        a[it]++;
    }

    vector<pair<char,int>> b;
    int cont = 0;
    char aux;

    for(auto it : a) {
        b.pb(it);
        if (it.second & 1) {
            cont++;
            aux = it.first;
        }
    }

    deque<char> st;

    if (cont > 1) {
        cout << "NO SOLUTION" << endl;
        return;
    }
    else if (sz(s) % 2 == 1 && cont == 1) st.pb(aux);

    for(auto it : b) {
        fore (i,0,(it.second / 2)) st.push_front(it.first);
        fore (i,0,(it.second / 2)) st.push_back(it.first);
    }

    for (auto it : st) cout << it;
}

int main(){
    IOS

    solve();    

    return 0;
}