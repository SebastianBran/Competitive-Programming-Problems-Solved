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

int l, r;

bool valid(int& a) {
    string s = to_string(a);
    set<char> st;

    fore(i,0,s.size()) st.insert(s[i]);

    return st.size() == s.size();
}

int main(){
    IOS

    cin >> l >> r;

    fore(i,l,r+1) {
        if (valid(i)) {
            cout << i << endl;
            return 0;
        }
    }
    
    cout << "-1" << endl;

    return 0;
}