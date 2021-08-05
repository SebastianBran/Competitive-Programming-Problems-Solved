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
typedef vector<vi> vvi;

int t, p, q;
vector<vector<pair<ll,ll>>> nums(18, vector<pair<ll,ll>>(18, { 1e18, 0 }));

void prec() {
    fore (i,0,17) {
        string s;
        fore (j,0,i) s += '1';
        
        for (int k = s.size(); k >= 0; k--) {
            if (k < s.size()) s[k] = '2';
            do {
                ll n = stoll(s + '2');
                fore (l,1,18) {
                    if (n % (1 << l) == 0) {
                        nums[i + 1][l].first = min(nums[i + 1][l].first, n);
                        nums[i + 1][l].second = max(nums[i + 1][l].second, n);
                    }
                    else break;
                }
            } while (next_permutation(all(s))); 
        }
    }
}

int main(){
    IOS

    prec();

    int cont = 1;
    cin >> t;

    while (t--) {
        cin >> p >> q;

        cout << "Case " << cont << ": ";
        if (nums[p][q].second == 0) cout << "impossible" << endl;
        else if (nums[p][q].first == nums[p][q].second) cout << nums[p][q].first << endl;
        else cout << nums[p][q].first << " " << nums[p][q].second << endl;
        cont++;
    }
    
    return 0;
}