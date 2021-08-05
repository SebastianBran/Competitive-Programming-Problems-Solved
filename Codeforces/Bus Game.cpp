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

int x, y;

void solve() {
    cin >> x >> y;

    bool turn = true;
    while (true) {
        if (turn) {
            if (x >= 2 && y >= 2) {
                x -= 2;
                y -= 2;
            }
            else if (x >= 1 && y >= 12) {
                x -= 1;
                y -= 12;
            }
            else if (y >= 22) {
                y -= 22;
            }
            else {
                cout << "Hanako";
                return;
            }
            turn = !turn;
        }
        else {
            if (y >= 22) {
                y -= 22;
            }
            else if (x >= 1 && y >= 12) {
                x -= 1;
                y -= 12;
            }
            else if (x >= 2 && y >= 2) {
                x -= 2;
                y -= 2;
            }
            else {
                cout << "Ciel";
                return;
            }
            turn = !turn;
        }
    }    
}

int main(){
    IOS

    solve();

    return 0;
}