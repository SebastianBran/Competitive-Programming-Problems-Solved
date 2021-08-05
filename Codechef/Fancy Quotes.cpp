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
string a;

int main(){
    IOS

    cin >> t;
    cin.ignore();

    while (t--) {
        getline(cin, a);
        istringstream ss(a);
        string b;
        bool es = false;

        while(ss >> b){
            if(b == "not") {
                es = true;
                break;
            }
        }

        if(es) cout << "Real Fancy" << endl;
        else cout << "regularly fancy" << endl;
    }

    return 0;
}