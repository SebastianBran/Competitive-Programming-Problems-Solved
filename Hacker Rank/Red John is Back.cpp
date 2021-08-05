#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

const int MAXN = 40;
int t, n;
long long c[MAXN + 1][MAXN + 1];
vector<int> primes;

void pre_primes() {
    vector<bool> is(1e6 + 1, true);
    primes.push_back(2);
    for(long long i = 4; i <= 1e6; i += 2) is[i] = false;
    for(long long i = 3; i <= 1e6; i++) {
        if(is[i]) {
            primes.push_back(i);
            for(long long j = i * i; j <= 1e6; j += 2 * i) is[j] = false;
        } 
    }
}

void pre() {
    c[0][0] = 1;
    for(int i = 1; i <= MAXN; i++) {
        c[i][0] = c[i][i] = 1;
        for(int j = 1; j < i; j++) {
            c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
        }
    }
}

int num_primes(int ways) {
    int cont = 0;
    for(auto it : primes) {
        if(it <= ways) cont++;
        else break;
    }
    return cont;
}

long long solve() {
    cin >> n;
    
    long long ways = 0;
    int squares = n / 4;
    for(int i = 0; i <= squares; i++) {
        int res = n - i * 4;
        ways += c[res + i][i];
    }
    
    return num_primes(ways);
}

int main() {
    IOS
    pre();
    pre_primes();
        
    cin >> t;
    while(t--)
        cout << solve() << endl;
        
    return 0;
}