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

int n;
vector<pair<int,int>> a;

bool calificado(){
    fore(i,0,n){
        if(a[i].first!=a[i].second){
            return true;
        }
    }

    return false;
}

bool sin_calificar(){
    fore(i,0,n-1){
        if(a[i].second<a[i+1].second){
            return true;
        }
    }

    return false;
}

int main(){
    IOS

    cin>>n;

    a.resize(n);

    fore(i,0,n) cin>>a[i].first>>a[i].second;

    if(calificado()) cout<<"rated";
    else if(sin_calificar()) cout<<"unrated";
    else cout<<"maybe";
    
    return 0;
}