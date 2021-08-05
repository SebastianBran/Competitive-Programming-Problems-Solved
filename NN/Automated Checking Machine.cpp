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

int a[5], b[5];
bool es;

int main(){
    IOS

    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]){
        cin>>b[0]>>b[1]>>b[2]>>b[3]>>b[4];

        es = true;

        fore(i,0,5){
            if(a[i] == b[i]){
                es = false;
                break;
            }
        }

        if(es) cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }

    return 0;
}