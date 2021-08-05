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
string aux;
set<char> a, b;

int main(){
    IOS

    cin>>n;

    fore(i,0,n){
        cin>>aux;
        fore(j,0,n){
            if(i==j || i+j==n-1){
                a.insert(aux[j]);
            }
            else{
                b.insert(aux[j]);
            }
        }
    }

    if(a.size()==1 && b.size()==1){
        char a1, a2;
        for(auto it : a) a1=it;
        for(auto it : b) a2=it;

        if(a1==a2) cout<<"NO";
        else cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}