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

int n, m;

bool primes(){
    bool es=true;
    fore(i,n+1,m+1){
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                es=false;
                break;
            }
        }

        if(es){
            if(i==m) return true;
            else return false;
        }
    
        es=true;
    }

    return false;
}

int main(){

    cin>>n>>m;

    if(primes()) cout<<"YES";
    else cout<<"NO";

    return 0;
}