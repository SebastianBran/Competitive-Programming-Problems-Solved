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
 
string aux;
vector<pair<char, int>> a(3);
 
int main() {
    IOS
    
    a[0] = {'A', 0};
    a[1] = {'B', 0};
    a[2] = {'C', 0};
 
    fore(i,0,3) {
        cin >> aux;
        if (aux[1] == '<') {
            a[int(aux[0] - 'A')].second--;
            a[int(aux[2] - 'A')].second++;
        }
        else {
            a[int(aux[0] - 'A')].second++;
            a[int(aux[2] - 'A')].second--;
        }
    }
 
    sort(all(a), [](pair<char, int>& a, pair<char, int>& b) {
        return a.second < b.second;
    });
 
    if (a[0].second == -2 && a[1].second == 0 && a[2].second == 2) {
        cout << a[0].first << a[1].first << a[2].first << endl;
    }
    else {
        cout << "Impossible" << endl;
    }
 
    return 0;
}