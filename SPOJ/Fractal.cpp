#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> matrix;

int pow3(int x) {
    int ans = 1;
    for (int i = 1; i <= x; i++) ans = ans * 3;
    return ans;
}

void solve(int n, int x, int y) {
    if(n == 1) {
        matrix[x][y] = 'X';
        return;
    }

    solve(n - 1, x, y);
    int d = 2 * pow3(n - 2);
    solve(n - 1, x + d, y);
    solve(n - 1, x, y + d);
    solve(n - 1, x + d, y + d);
    solve(n - 1, x + (d / 2), y + (d / 2));
}

int main(){
    int n;

    while (cin >> n) {
        if (n == -1) return 0;

        matrix.clear();
        matrix.resize(pow3(6), vector<char>(pow3(6), ' '));

        solve(n, 0, 0);

        for (int i = 0; i < pow3(n - 1); i++) {
            for (int j = 0; j < pow3(n - 1); j++) {
                cout << matrix[i][j];
            }
            cout << endl;
        }
        cout << "-" << endl;
    }

    return 0;
}