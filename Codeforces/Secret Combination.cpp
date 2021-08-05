#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define forell(i,x,n) for(long long i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vii;

int n;
string d;

string getNumber(string& d) {
    int res = d[0] - '0';
    fore (i, 0, n) {
        int aux = d[i] - '0';
        aux = (aux + 10 - res) % 10;
        d[i] = aux + '0';
    }
    return d;
}

string getRes(string& num) {
    string relleno = string(n, '0');
    return string(relleno.begin(), relleno.begin() + (n - num.size())) + num;
}

void solve() {
    cin >> n >> d;

    string mini = string(1000, '9');
    fore (i, 0, n) {
        string aux = string(d.begin() + i, d.end()) + string(d.begin(), d.begin() + i);
        mini = min(mini, getNumber(aux));
    }

    cout << getRes(mini) << endl;
}

int main(){
    IOS

    solve();

    return 0;
}