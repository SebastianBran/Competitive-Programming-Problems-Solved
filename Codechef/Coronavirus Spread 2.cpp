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

void cant(set<int>& s, vector<vector<float>>& mt, int num, float t) {
    fore (i,0,n) {
        if (mt[num][i] > t) { // verifico que el tiempo de encuentro sea mayor que el tiempo de infeccion
            s.insert(i); // agrego a la persona
            cant(s, mt, i, mt[num][i]); // busco otros contacto de la nueva persona infectada
        }
    }
}

pair<int,int> maxymin(vi& a) {
    int mini = 1e5, maxi = 0;
    //vector<vi> mt(n);
    vector<vector<float>> mt(n);
    fore (i,0,n) mt[i].resize(n);

    fore (i,0,n) {
        fore (j,0,n) {
            if (i == j) mt[i][j] = -1;
            else {
                float difd = j - i;
                float difv = a[i] - a[j];
                if (difv != 0) {
                    float aux = difd / difv; // tiempo de encuentro
                    if (aux > 0) mt[i][j] = aux;
                    else mt[i][j] = -1;                
                }
                else {
                    mt[i][j] = -1;
                }
            }
        }
    }

    /*fore (i,0,n) {
        fore (j,0,n) {
            cout << mt[i][j] << " ";
        }
        cout << endl;
    }*/
    
    fore (i,0,n) {
        set<int> s;
        s.insert(i);
        cant(s, mt, i, 0);
        mini = min(mini, (int)s.size());
        maxi = max(maxi, (int)s.size());
    }

    return { mini, maxi };
}

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n;

        vi v(n);

        fore (i,0,n) cin >> v[i];

        pair<int,int> aux = maxymin(v);

        cout << aux.first << " " << aux.second << endl;
    }
    
    return 0;
}