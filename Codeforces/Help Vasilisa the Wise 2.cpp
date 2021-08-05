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

int r1, r2, c1, c2, d1, d2;
int a, b, c, d;

int main(){
    IOS

    cin>>r1>>r2>>c1>>c2>>d1>>d2;

    a = (c1+r1-d2)/2;
    b = (c2+r1-d1)/2;
    c = (c1+r2-d1)/2;
    d = (c2+r2-d2)/2;
    

    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
        if(a>=1 && a<=9 && b>=1 && b<=9 && c>=1 && c<=9 && d>=1 && d<=9){
            if(a+b==r1 && a+c==c1 && b+d==c2 && c+d==r2 && a+d==d1 && c+b==d2){
                cout<<a<<" "<<b<<endl<<c<<" "<<d;
                return 0;
            }
        }
    }
    
    cout<<-1;
    
    return 0;
}