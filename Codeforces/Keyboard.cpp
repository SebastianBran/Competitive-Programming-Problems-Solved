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
typedef vector<pair<int,int>> vii;

int n, m, x, q;
string s;

void solve() {
    cin >> n >> m >> x;

    map<char, vector<pair<int,int>>> kb;
    vector<pair<int,int>> shif;
    char aux;

    fore (i,0,n) {
        fore (j,0,m) {
            cin >> aux;
            if (aux != 'S') kb[aux].pb({i, j});
            else shif.pb({i, j});
        }
    }

    cin >> q;
    map<char, int> word;
    fore(i,0,q) {
        cin >> aux, word[aux]++;; 
    }

    bool ok = true;
    int cont = 0;

    for (auto it : word) {
        if (kb.count(tolower(it.first))) {
            if (isupper(it.first)) {
                if (shif.size() == 0) {
                    ok = false;
                    break;
                }

                aux = tolower(it.first);
                bool shi = false;
                for (auto it1 : kb[aux]) {
                    for (auto it2 : shif) {
                        if ((float)sqrt((float)pow(it1.first - it2.first, 2) + (float)pow(it1.second - it2.second, 2)) > x) shi = true;
                        else {
                            shi = false;
                            goto go;
                        }
                    }
                }

                go:
                if (shi) {
                    cont += it.second;
                }
            }
        }
        else {
            ok = false;
            break;
        }
    }  

    if (!ok) cout << -1 << endl;
    else cout << cont << endl;
}

int main(){
    IOS

    solve();
    
    return 0;
}