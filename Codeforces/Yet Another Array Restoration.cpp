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

int t, n, x, y;

vi div(){
    vi a;
    int dif = y-x;
    for(int i=1;i<=dif;i++){
        if(dif%i==0) a.pb(i);
    }

    return a;
}

void solve(){
    vi a = div();
    int dif = y-x, mini=1e9+1;
    for(auto it : a){
        if((dif/it)+1<=n){
            mini=min(mini,it);
        }
    }

    int cont=0;
    for(int i = y;i>0 && cont<n;i-=mini, cont++){
        cout<<i<<" ";
    }

    for(int i=y+mini; cont<n; i+=mini, cont++){
        cout<<i<<" ";
    }

    cout<<endl;
}

int main(){
    IOS

    cin>>t;

    int aux;
    while(t--){
        cin>>n>>x>>y;

        solve();
    }
    
    return 0;
}