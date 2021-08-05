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

ll p,d; 

int main(){
    IOS

	cin>>p>>d;

    p+=1;
    ll aux = 0;

    for (ll k=10; p%k <= d; k*=10) {
        aux=p%k;
    }

	cout<<p - aux - 1;
    
    return 0;
}