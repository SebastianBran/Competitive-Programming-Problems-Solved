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

int t;
string s;
int cont;

int main(){
    IOS

    cin >> t;

    while (t--) {
        cont = 0;
        cin >> s;
        int n = s[0] - '0';
        cont = 10*(n - 1);
        cont += (int)s.size()*((int)s.size() + 1)/2;
        cout << cont << endl;
    }
     
    return 0;
}