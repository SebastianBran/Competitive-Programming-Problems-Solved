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
#define PI 3.14159265358979323846264338327950

int t, n, f;
const double eps = 1e-6;

bool check(vector<double>& v, double x) {
    int cont = 0;

    fore (i, 0, n) 
        cont += v[i] / x;

    return cont >= f + 1;
}

double bs(vector<double>& v) {
    double l = 0, r = v[n - 1];

    while (abs(l - r) > eps) {
        double mit = l + (r - l + eps) / 2.0;
        if (check(v, mit)) l = mit;
        else r = mit - eps;
    }

    return l;
} 

void solve() {
    cin >> n >> f;

    vector<double> v(n);
    double r;

    fore (i, 0, n) {
        cin >> r;
        v[i] = r * r * (long double)PI;
    }

    ordenar(v);

    cout << fixed << setprecision(4);
    cout << bs(v) << endl;
}

int main() {
    IOS

    cin >> t;

    while (t--)
        solve();

    return 0;
}