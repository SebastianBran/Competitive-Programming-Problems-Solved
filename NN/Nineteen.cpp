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

int n = 0, e = 0, i = 0, t = 0;
string a;

int main(){
    IOS

    cin >> a;

    for(auto it : a){
        if(it == 'n') n++;
        else if(it == 'e') e++;
        else if(it == 'i') i++;
        else if(it == 't') t++;
    }

    
    cout<<min(min((n-1)/2, e/3), min(i, t));
    
    return 0;
}