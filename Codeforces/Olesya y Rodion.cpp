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

int n, t;

int main(){
    IOS

    cin>>n>>t;

    if(t<10){
        fore(i,0,n) cout<<t;
    }
    else{
        if(n==1) cout<<-1;
        else{
            cout<<1;
            fore(i,0,n-1) cout<<0;
        }
    }
    
    return 0;
}