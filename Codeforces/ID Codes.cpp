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

string a;

int main(){
    IOS

    while (cin >> a && a != "#") {
        if (next_permutation(all(a))) cout << a << endl;
        else cout << "No Successor" << endl;
    } 
    
    return 0;
}