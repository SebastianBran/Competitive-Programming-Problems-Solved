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

int n, m;
string a, b;

int main(){
    IOS

    cin>>n>>m;
    cin>>a>>b;

    if((a[0] == '>' && b[0] == 'v') || (a[0] == '<' && b[m-1] == 'v') || (a[n-1] == '>' && b[0] == '^') || (a[n-1] == '<' && b[m-1] == '^')){
        cout << "NO" << endl;
        return 0;
    }

    cout<<"YES";
    
    return 0;
}