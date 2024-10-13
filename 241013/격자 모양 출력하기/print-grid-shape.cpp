#include <iostream>
using namespace std;

int main() {
    int n, m, grid[10][10];
    int x, y;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            grid[i][j] = 0;
        }
    }
    for(int i = 0; i < m; i++) {
        cin >> y >> x;
        grid[y-1][x-1] = x*y;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}