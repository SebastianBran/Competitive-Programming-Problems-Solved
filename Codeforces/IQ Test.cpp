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

char a[4][4];

int main(){
    IOS

    fore(i,0,4){
        fore(j,0,4){
            cin>>a[i][j];
        }
    }

    int contB = 0, contW = 0;
    fore(i,0,3){
        fore(j,0,3){
            if(a[i][j] == '#') contB++;
            else contW++;
            if(a[i][j+1] == '#') contB++;
            else contW++;
            if(a[i+1][j] == '#') contB++;
            else contW++;
            if(a[i+1][j+1] == '#') contB++;
            else contW++;

            if(contB >= 3 || contW >= 3){
                cout<<"YES";
                return 0;
            }   

            contB = contW = 0;
        }
    }

    cout<<"NO";
    
    return 0;
}