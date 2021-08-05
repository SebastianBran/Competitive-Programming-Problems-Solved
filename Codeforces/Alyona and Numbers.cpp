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

int suma(int a, int b){
    int cont=0;
    fore(i,1,a+1){
        fore(j,1,b+1){
            if((i+j)%5==0) cont++;
        }
    }

    return cont;
}

int main(){
    IOS

    cin>>n>>m;

    int a1 = n/5, a2 = n%5;
    int b1 = m/5, b2 = m%5;

    ll total = 0;

    total = ((ll)a1)*(b1*5);
    total += (ll)a2*b1;
    total += (ll)b2*a1;
    total += suma(a2, b2);
    
    cout<<total;

    return 0;
}