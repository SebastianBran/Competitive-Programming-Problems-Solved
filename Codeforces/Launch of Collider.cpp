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
string d;

int main(){
    IOS

    cin>>n>>d;
    vi a(n);
    
    fore(i,0,n) cin>>a[i];

    int mini=1e9+1;
    fore(i,1,n){
        if(d[i-1]=='R' && d[i]=='L')
            mini=min(mini,(a[i]-a[i-1])/2);
    }

    if(mini == 1e9+1) cout<<-1;
    else cout<<mini;

    return 0;
}