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

int n, cont = 0, pos = 1;
vector<vector<char>> table(15, vector<char>(15));

int aux = 0;
void backtracking(int col, int rows, int diagonalLeft, int diagonalRight) {
    aux++;

    if (col == n) {
        cont++;
        return;
    }

    fore (row, 0, n) {
        bool okRow = (rows & (1 << row)); //verifico si la fila esta ocupada
        bool okDiagonalLeft = (diagonalLeft & (1 << (row - col + n - 1))); //verifico que la diagonal izquierda no esta ocupada
        bool okDiagonalRight = (diagonalRight & (1 << (row + col))); //verifico que la diagonal derecha no esta ocupada

        if (!(okRow || okDiagonalLeft || okDiagonalRight) && table[row][col] != '*') {
            backtracking(col + 1, (rows | (1 << row)), (diagonalLeft | (1 << (row - col + n - 1))), (diagonalRight | (1 << (row + col))));
        }
    }
}


int main(){
    IOS

    while (cin >> n) {
        if (n == 0) return 0;
        cont = 0;

        fore (i, 0, n) {
            fore (j, 0, n) {
                cin >> table[i][j];
            }
        }

        backtracking(0, 0, 0, 0);
        cout << "Case " << pos++ << ": " << cont << endl;
    }

    return 0;
}