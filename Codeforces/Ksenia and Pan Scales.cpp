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

string a, b;
int x=0, y=0, z;

int main(){
    IOS

    cin>>a>>b;
    
    bool cb = true;
    for(auto it : a){
        if(it == '|'){
            cb = false;
            continue;
        }
        if(cb){
            x++;
        }
        else{
            y++;
        }
    }    

    z = b.size();

    int maxi = abs(x-y);
    int aux = z-maxi;

    if(aux>=0){
        if(aux%2==0){
            if(x<=y){
                a.insert(a.begin(),b.begin(),b.begin()+maxi+aux/2);
                a.insert(a.end(),b.begin()+maxi+aux/2, b.end());
            }
            else{
                a.insert(a.end(),b.begin(),b.begin()+maxi+aux/2);
                a.insert(a.begin(),b.begin()+maxi+aux/2, b.end());
            }

            cout<<a;
        }
        else{
            cout<<"Impossible"<<endl;
        }
    }
    else{
        cout<<"Impossible";
    }

    return 0;
}