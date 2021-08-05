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

const int MAXN = 5 * 1e3;
vector<vi> dp(MAXN, vi(MAXN));
string s;
int q;

void solve(string s) {
    int len = s.size();

    fore (dis, 0, len) { 
        fore (i, 0, len - dis) { //fila
            int j = i + dis; //columna
            if (i == j) dp[i][j] = 1; //cuando i == j, (s[i] == s[j]), un solo caracter es palindromo
            else if (i + 1 == j) dp[i][j] = (s[i] == s[j]); // para el caso de letras consecutivas, 1 si son iguales, 0 si son diferentes
            else dp[i][j] = (s[i] == s[j]) & dp[i + 1][j - 1]; // es palindromo si los extremos son iguales y la subcadena entre ellos es palindroma
        }
    }

    fore (dis, 1, len) { 
        fore (i, 0, len - dis) { //fila
            int j = i + dis; //columna
            dp[i][j] += (dp[i + 1][j] + dp[i][j - 1]); // sumo a la respuesta, la cantidad de palindromos sin contar la letra en la posicion i + la cantidad de palindromos sin contar la letra en la posicion j
            if (i + 1 <= j - 1) dp[i][j] -= dp[i + 1][j - 1]; // resto los palindromos que se repiten
        }
    }
}

int main(){
    IOS

    cin >> s;

    solve(s);

    cin >> q;

    int l, r;

    while (q--) {
        cin >> l >> r;
        cout << dp[l - 1][r - 1] << endl;
    }

    return 0;
}