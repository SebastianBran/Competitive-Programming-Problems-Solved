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

int n, m, a;

int main(){
    IOS

    cin>>n>>m>>a;

    int x = ceil(((double)n)/a);
    int y = ceil(((double)m)/a);

    cout<<((ll)x)*y;
    
    return 0;
}