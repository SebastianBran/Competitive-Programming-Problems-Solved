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

    cin>>n;

    map<int,int> a;

    fore(i,0,n){
        cin>>aux;
        a[aux]++;
    }

    vector<pair<int,int>> b(a.size());

    int i=0;
    for(auto it : a){
        b[i]={it.first,it.second};
        i++;
    }

    int total=0;
    fore(i,1,b.size()-1){
        if(b[i-1].first<b[i].first && b[i].first<b[i+1].first){
            total+=b[i].second;
        }
    }

    cout<<total;
    
    return 0;
}