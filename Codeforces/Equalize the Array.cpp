#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define forell(i,x,n) for(long long i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
#define sz(x) (int)x.size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vii;

set<pair<int,int>> st;

struct segment {
    pair<int,int> c1, c2;
    segment(pair<int,int> c1, pair<int,int> c2) {
        this->c1 = c1;
        this->c2 = c2;
    }
};

void intersect(segment s1, segment s2) {
    if((s1.c1.first <= s2.c1.first && s2.c1.first <= s1.c2.first) &&
       (s2.c1.second <= s1.c1.second && s1.c1.second <= s2.c2.second)) {
        st.insert({s2.c1.first, s1.c1.second});
    }
}

void solve() {
    pair<int,int> c1, c2, c3, c4;

    cin >> c1.first >> c1.second >> c2.first >> c2.second;
    vector<segment> h1, v1;
    h1.pb(segment({c1.first, c2.second}, {c2.first, c2.second}));
    h1.pb(segment({c1.first, c1.second}, {c2.first, c1.second}));
    v1.pb(segment({c1.first, c1.second}, {c1.first, c2.second}));
    v1.pb(segment({c2.first, c1.second}, {c2.first, c2.second}));
    
    cin >> c3.first >> c3.second >> c4.first >> c4.second;
    vector<segment> h2, v2;
    h2.pb(segment({c3.first, c4.second}, {c4.first, c4.second}));
    h2.pb(segment({c3.first, c3.second}, {c4.first, c3.second}));
    v2.pb(segment({c3.first, c3.second}, {c3.first, c4.second}));
    v2.pb(segment({c4.first, c3.second}, {c4.first, c4.second}));

    for(auto it1 : h1) {
        for(auto it2 : v2) {
            intersect(it1, it2);
        }
    }

    for(auto it1 : h2) {
        for(auto it2 : v1) {
            intersect(it1, it2);
        }
    }

    pair<int,int> a = {0,0}, b = {0,0};
    for(auto it1 : st) {
        for(auto it2 : st) {
            if(it1.first != it2.first && it1.second != it2.second) {
                a = it1;
                b = it2;
                goto go;
            }
        }
    }

    go:
    ll area = abs(c1.first - c2.first) * abs(c1.second - c2.second);
    area += abs(c3.first - c4.first) * abs(c3.second - c4.second);
    area -= abs(a.first - b.first) * abs(a.second - b.second);
    cout << area << endl;
}   
  
int main(){
    IOS

    solve();
    
    return 0;
}
