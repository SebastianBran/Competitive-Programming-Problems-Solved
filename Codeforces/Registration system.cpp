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
string s;
map<string, int> m;

int main(){
    IOS

    cin >> n;

    while (n--) {
        cin >> s;
        m[s]++;
        if (m[s] > 1) cout << s << m[s] - 1<< endl;
        else cout << "OK" << endl; 
    }
    
    return 0;
}