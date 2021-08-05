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

int n, aux, t1=0, t2=0;;

int main(){
    IOS

    cin>>n;

    fore(i,0,n){
        fore(j,0,n){
            cin>>aux;
            if(i==j) t1+=aux;
            if((i+j)==n-1) t2+=aux;
        }
    }

    cout<<abs(t1-t2);

    return 0;
}