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

int main(){
    IOS

    cin>>n;
     
    int aux;
    map<int,int> a;

    fore(i,0,n){
        cin>>aux;
        a[aux]++;
    }

    if(n%2){
        int mit = (n/2)+1;
        for(auto it : a){
            if(it.second>mit){
                cout<<"NO";
                return 0;
            }
        }
    }
    else{
        int mit = (n/2);
        for(auto it : a){
            if(it.second>mit){
                cout<<"NO";
                return 0;
            }
        }
    }

    cout<<"YES";
    
    return 0;
}