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

ll n;

int main(){
    IOS

    cin>>n;

    if(n%2){
        cout<<-((n+1)/2);
    }
    else{
        cout<<n/2;
    }
    
    return 0;
}