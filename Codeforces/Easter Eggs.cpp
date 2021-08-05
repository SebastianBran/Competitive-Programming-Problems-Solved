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
char a[7] = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'};

int main(){
    IOS

    cin >> n;
    
    n -= 3;
    cout << "ROY";
    fore(i,0,n) cout << a[i%4 + 3];
    
    return 0;
} 