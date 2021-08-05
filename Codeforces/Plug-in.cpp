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
deque<char> a;

int main(){
    IOS

    cin >> s;

    for (auto it : s) {
        if (a.empty()) {
            a.push_back(it);
        }
        else {
            if (it == a.back()) a.pop_back();
            else a.push_back(it);
        }
    }

    for(auto it : a) cout << it;
    
    return 0;
}