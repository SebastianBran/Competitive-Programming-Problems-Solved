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

int k, n;

int main(){
    IOS

    cin>>k>>n;

    k=k*2+1;

    vi a(k);

    fore(i,0,k) cin>>a[i];

    int cont=0;
    for(int i=1;i<k && cont<n;i+=2){
        if(a[i]>a[i-1]+1 && a[i]>a[i+1]+1){
            a[i]--;
            cont++;
        }
    }

    fore(i,0,k) cout<<a[i]<<" ";
    
    return 0;
}