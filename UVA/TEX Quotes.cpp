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

string a;

int main(){
    IOS

    char cm = 34;
    bool aux = true;
    while (getline(cin, a)){

        fore(i,0,a.size()){
            if(a[i] == cm){
                if(aux) a.replace(i,1,"``");
                else a.replace(i,1,"''");

                aux = !aux;
            }
        }

        cout<<a<<endl;
    }
    
    return 0;
}