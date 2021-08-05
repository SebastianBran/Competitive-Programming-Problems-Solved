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

int cont1 = 0, cont2 = 0;
string a;

int main(){
    IOS

    cin>>a;

    fore(i,0,a.size()){
        if(a[i]>='A' && a[i]<='Z') cont1++;
        else cont2++;
    }

    if(cont2 >= cont1){
        fore(i,0,a.size()) cout<<(char)tolower(a[i]);
    }
    else{
        fore(i,0,a.size()) cout<<(char)toupper(a[i]);
    }
    
    return 0;
}