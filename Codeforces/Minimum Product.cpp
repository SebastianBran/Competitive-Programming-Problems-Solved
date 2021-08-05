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

int t, a, b, x, y, n;

int main(){
    IOS

    cin>>t;

    int aux1, aux2;
    while(t--){
        cin>>a>>b>>x>>y>>n;

        aux1 = (a-x)<n?(a-x):n;
        aux2 = (b-y)<n?(b-y):n;

        if((a-aux1)<(b-aux2)){
            a-=aux1;
            n-=aux1;
            aux2 = aux2<n?aux2:n;
            b-=aux2;
        }
        else{
            b-=aux2;
            n-=aux2;
            aux1 = aux1<n?aux1:n;
            a-=aux1;
        }

        cout<<(ll)a*b<<endl;
    }
    
    return 0;
}