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
string a;

int main(){
    IOS

    cin>>n>>a;

    int pos;
    char aux;
    fore(i,0,n){
        if(a[i] == 'R'){
            aux = a[i];
            pos=i;
            break;
        }
        else if(a[i]=='L'){
            aux = a[i];
            pos=i;
            break;
        }
    }

    if(aux == 'R'){
        fore(i,pos+1,n){
            if(a[i]!='R'){
                cout<<pos+1<<" "<<i+1;
                return 0;
            }
        }
    }
    else{
        for(int i=n-1;i>=0;i--){
            if(a[i]=='L'){
                cout<<i+1<<" "<<pos;
                return 0;
            }
        }
    }
    
    return 0;
}