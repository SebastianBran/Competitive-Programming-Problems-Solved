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

string s;

int main(){
    IOS

    cin >> s;

    map<char,int> m;

    for (auto it : s) {
        m[it]++;
    }

    auto it = --m.end();

    fore(i,0,(*it).second) cout << (*it).first;
    
    return 0;
}