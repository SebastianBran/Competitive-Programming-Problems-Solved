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

int n, test=0;

void rotar(vector<vector<char>>& a){
    vector<vector<char>> aux(n);
    fore(i,0,n) aux[i].resize(n);

    fore(i,0,n){
        fore(j,0,n){
            aux[i][j] = a[n-1-j][i];
        }
    }

    a = aux;
}

void reflexion(vector<vector<char>>& a){
    fore(i,0,n/2){
        fore(j,0,n){
            swap(a[i][j],a[n-1-i][j]);
        }
    }
}

bool comparar(vector<vector<char>>& a, vector<vector<char>>& b){
    fore(i,0,n){
        fore(j,0,n){
            if(a[i][j] != b[i][j]) return false;
        }
    }

    return true;
}

bool rotaciones(vector<vector<char>>& a, vector<vector<char>>& b){
    vector<string> grados = {"90","180","270"};
    fore(i,0,3){
        rotar(a);
        if(comparar(a,b)){
            cout<<"Pattern "<<test<<" was rotated "<<grados[i]<<" degrees."<<endl;
            return true;
        }
    }

    return false;
}

bool reflexiones(vector<vector<char>>& a, vector<vector<char>>& b){
    vector<string> grados = {"90","180","270"};
    reflexion(a);
    fore(i,0,3){
        rotar(a);
        if(comparar(a,b)){
            cout<<"Pattern "<<test<<" was reflected vertically and rotated "<<grados[i]<<" degrees."<<endl;
            return true;
        }
    }

    return false;
}

void solve(vector<vector<char>>& a, vector<vector<char>>& b){

    if(comparar(a,b)) cout<<"Pattern "<<test<<" was preserved."<<endl;
    else{
        vector<vector<char>> aux = a;
        if(rotaciones(aux, b)) goto sig;
        else{
            vector<vector<char>> aux = a;
            reflexion(aux);
            if(comparar(aux,b)) cout<<"Pattern "<<test<<" was reflected vertically."<<endl;
            else{
                vector<vector<char>> aux = a;
                if(reflexiones(aux, b)) goto sig;
                else{
                    cout<<"Pattern "<<test<<" was improperly transformed."<<endl;
                }
            }
        }
    }

sig:
    return;
}

int main(){
    IOS

    while(cin>>n){
        test++;
        vector<vector<char>> a(n);
        vector<vector<char>> b(n);

        char aux;
        fore(i,0,n){
            fore(j,0,n) cin>>aux, a[i].pb(aux);
            fore(j,0,n) cin>>aux, b[i].pb(aux);
        }

        solve(a,b);
    }
    
    return 0;
}