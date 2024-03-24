#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<char>> grid(m, vector<char>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    vector<vector<int>> mines(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '*') {
                mines[i][j] = -1;
                continue;
            }

            int count = 0;
            for (int ii = -1; ii <= 1; ii++) {
                for (int jj = -1; jj <= 1; jj++) {
                    if (i + ii < 0 || i + ii >= m || j + jj < 0 || j + jj >= n) {
                        continue;
                    }
                    if (grid[i + ii][j + jj] == '*') {
                        count++;
                    }
                }
            }
            mines[i][j] = count;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mines[i][j] == -1) {
                cout << '*';
            } else {
                cout << mines[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}
