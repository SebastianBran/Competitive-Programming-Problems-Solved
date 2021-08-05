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

int n;

int main(){
    IOS

    cin >> n;

    vector<pair<double,double>> a(n);

    fore (i,0,n) cin >> a[i].first >> a[i].second;
    
    sort(all(a), [](pair<double,double>& a, pair<double,double>& b) {
        if (a.first == b.first) return a.second < b.second;
        return a.first < b.first;
    });

    int cont = 0;
    double t = 0;

    do {
        double aux = 0;
        fore (i,1,n) {
            aux += sqrt(pow(a[i].first - a[i-1].first, 2) + pow(a[i].second - a[i-1].second, 2));
        }
        t += aux;
        cont++;
    } while (next_permutation(all(a)));

    cout << fixed;
    cout << setprecision(10);
    cout << (double)(t / cont) << endl;

    return 0;
}