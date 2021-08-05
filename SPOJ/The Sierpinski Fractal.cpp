#include <iostream>
#include <vector>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

vector<vector<char>> matrix;

void draw(int n, int x, int y) {
    if (n == 1) {
        matrix[x][y] = matrix[x - 1][y + 1] = '/';
        matrix[x][y + 1] = matrix[x][y + 2] = '_';
        matrix[x][y + 3] = matrix[x - 1][y + 2] = '\\';
        return;
    }
    draw(n - 1, x, y);
    draw(n - 1, x, y + (1 << n));
    int d = (1 << (n - 1));
    draw(n - 1, x - d, y + d);
}

int main(){
    IOS

    int n;
    while (cin >> n) {
        if (n == 0) return 0;

        matrix.clear();
        matrix.resize((1 << n), vector<char>((1 << (n + 1)), ' '));
        draw(n, (1 << n) - 1, 0);

        for (int i = 0; i < (1 << n); i++) {
            for (int j = 0; j < (1 << (n + 1)); j++) {
                cout << matrix[i][j];
            }
            cout << endl;
        } 
        cout << endl;
    }

    return 0;
}