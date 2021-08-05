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

int a, b, t;

int main(){
    IOS

    cin>>t;

    double cant;
    while(t--){
        cin>>a>>b;

        cant = ceil((double)abs(a-b)/10);
        cout<<fixed;
        cout<<setprecision(0)<<cant<<endl;      
    }
    
    return 0;
}