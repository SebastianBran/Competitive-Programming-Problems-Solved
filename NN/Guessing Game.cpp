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

int n, maxi = 11, mini = 0;
string a;

int main(){
    IOS

    while (cin >> n) {
        if(n == 0) return 0;
        cin.ignore();
        getline(cin, a);

        if (a == "too high") {
            maxi = min(maxi, n);
        }
        else if (a == "too low") {
            mini = max(mini, n);
        }
        else {
            if (n > mini && n < maxi) cout << "Stan may be honest" << endl;
            else cout << "Stan is dishonest" << endl;
            
            mini = 0;
            maxi = 11;
        }
    }
    
    return 0;
}