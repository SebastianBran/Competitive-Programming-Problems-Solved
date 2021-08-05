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

int x, cont=0;
vi a(30);

void pre(){
    fore(i,0,30){
        a[i]=1<<i;
    }
}

int bs(){
    int mit, i=0, j=29;

    while(i<j){
        mit=(i+j)/2;
        if(a[mit]<x) i=mit+1;
        else j=mit;
    }

    if(a[i]==x || i==0) return a[i];
    return a[i-1];
}

int cant(){
    int cont=0, pos;
    while(x>0){
        cont++;
        x-=bs();
        cout<<x<<endl;
    }

    return cont;
}

int main(){
    IOS

    pre();

    cin>>x;

    cout<<cant();
    
    return 0;
}