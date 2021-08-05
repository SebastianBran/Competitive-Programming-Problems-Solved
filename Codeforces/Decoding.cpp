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

deque<char> d;
int n;
string s;

int main(){
    IOS

    cin >> n;
    cin >> s;

    fore (i,0,n) {
        if ((i + n)%2) d.push_back(s[i]);
        else d.push_front(s[i]);
    }

    fore(i,0,n) cout << d[i];
    
    return 0;
} 