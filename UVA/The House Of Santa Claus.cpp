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

int matrix[5][5] = {
    {0, 1, 1, 0, 1},
    {1, 0, 1, 0, 1},
    {1, 1, 0, 1, 1},
    {0, 0, 1, 0, 1},
    {1, 1, 1, 1, 0}
};

vi v(9);

void backtracking(int pos, int ind) {
    v[ind] = pos + 1;
    if (ind == 8) {
        for (auto it : v) cout << it;
        cout << endl;
        return;
    }
    
    fore (i, 0, 5) {
        if (matrix[pos][i]) {
            matrix[pos][i] = matrix[i][pos] = 0;
            backtracking(i, ind + 1);
            matrix[pos][i] = matrix[i][pos] = 1;
        }
    }
}

int main(){
    IOS

    backtracking(0, 0);

    return 0;
}