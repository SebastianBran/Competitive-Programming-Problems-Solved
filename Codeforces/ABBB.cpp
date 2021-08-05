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

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> s;
        stack<char> a;
        for(auto it : s) {
            if (a.empty()) {
                a.push(it);
            }
            else {
                if ((it == 'B' && a.top() == 'A') || (it == 'B' && a.top() == 'B')) {
                    a.pop();
                }
                else {
                    a.push(it);
                }
            }
        }
        cout << a.size() << endl;
    }

    return 0;
}