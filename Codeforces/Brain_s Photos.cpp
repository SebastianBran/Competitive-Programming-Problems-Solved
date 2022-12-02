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
char aux;
bool color=false;

int main(){
    IOS

    cin>>n>>m;

    int limi=n*m;

    while(limi--){
        cin>>aux;
        if(aux=='C' || aux=='M' || aux=='Y'){
            color=true;
        }
    }
    
    if(color) cout<<"#Color";
    else cout<<"#Black&White";

    return 0;
}