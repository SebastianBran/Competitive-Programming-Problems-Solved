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

const int MAXN = 9;
int n;
int board[MAXN][MAXN];
int checkColumns[MAXN], checkRows[MAXN], checkBox[MAXN];
bool finish, no_solution;

void printBoard() {
    fore (i, 0, n * n) {
        cout << board[i][0];
        fore (j, 1, n * n) cout << " " << board[i][j];
        cout << endl;
    }
    cout << endl;
}

void solve(int row, int col) {
    if (finish) return;
    if (row == n * n - 1 && col == n * n) {
        printBoard();
        finish = true;
        no_solution = false;
        return;
    }
    if (col == n * n) { 
        solve(row + 1, 0);
        return;
    }
    if (board[row][col] != 0) {
        solve(row, col + 1);
        return;
    }

    fore (i, 0, n * n) {
        if (!((checkColumns[col] | checkRows[row] | checkBox[(row / n) * n + (col / n)]) & (1 << i))) {
            checkColumns[col] |= (1 << i);
            checkRows[row] |= (1 << i);
            checkBox[(row / n) * n + (col / n)] |= (1 << i);
            board[row][col] = i + 1;
            solve(row, col + 1);
            board[row][col] = 0;
            checkColumns[col] ^= (1 << i);
            checkRows[row] ^= (1 << i);
            checkBox[(row / n) * n + (col / n)] ^= (1 << i);
        }
    }
}

int main(){
    IOS

    while (cin >> n) {
        memset(checkColumns, 0, sizeof(checkColumns));
        memset(checkRows, 0, sizeof(checkRows));
        memset(checkBox, 0, sizeof(checkBox));
        finish = false;
        no_solution = true;

        fore (i, 0, n * n) {
            fore (j, 0, n * n) {
                cin >> board[i][j];
                if (board[i][j] != 0) {
                    checkColumns[j] |= (1 << (board[i][j] - 1));
                    checkRows[i] |= (1 << (board[i][j] - 1));
                    checkBox[(i / n) * n + (j / n)] |= (1 << (board[i][j] - 1));
                }
            }
        }

        solve(0, 0);

        if (no_solution) cout << "NO SOLUTION" << endl;
    }

    return 0;
}