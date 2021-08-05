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
ll n, k;

int main(){
    IOS

    cin>>t;

    while(t--){
        cin>>n>>k;
        vector<ll> a(n);
        
        ll maxi=-1e9-1;
        fore(i,0,n){
            cin>>a[i];
            maxi=max(maxi,a[i]);
        }
        

        if(k%2){
            fore(i,0,n){
                cout<<maxi-a[i]<<" ";
            }
        }
        else{
            ll aux=0;
            fore(i,0,n){
                a[i]=maxi-a[i];
                aux=max(aux,a[i]);
            }
            fore(i,0,n){
                cout<<aux-a[i]<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}