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

string n;

string solve(string n) {
    if (n.size() == 1) return n;
    int sum = 0;
    for (auto it : n) sum += (it - '0');
    return solve(to_string(sum));
}

int main(){
    IOS

    while (cin >> n) {
        if(n == "0") return 0;
        cout << solve(n) << endl;    
    }

    return 0;
}