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

string a;

int main(){
    IOS

    cin>>a;

    if('9'-a[0]!=0) a[0]='0'+min(a[0]-'0','9'-a[0]);
    fore(i,1,a.size()){
        a[i]='0'+min(a[i]-'0','9'-a[i]);
    }

    cout<<a;
    
    return 0;
}