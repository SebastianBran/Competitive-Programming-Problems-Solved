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
int a[4] = {8,4,2,6};

int main(){
    IOS

    cin>>n;

    if(n==0) cout<<1;
    else cout<<a[(n-1)%4];
    
    return 0;
}