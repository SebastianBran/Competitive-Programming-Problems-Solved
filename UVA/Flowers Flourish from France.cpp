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

    while ( getline(cin, s) ) {
        if ( s == "*") break;

        istringstream ss(s);

        string a;
        bool si = true;
        char p = toupper(s[0]);
        while(ss >> a){
            if (toupper(a[0]) != p) {
                si = false;
                break;
            }
        }

        if(si) cout << "Y" << endl;
        else cout << "N" << endl;
    }
    
    return 0;
}