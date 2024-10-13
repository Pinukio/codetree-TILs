#include <iostream>
using namespace std;

int main() {
    int n, grid[10][10];
    cin >> n;
    for(int i = 0; i < n; i++) {
        grid[0][i] = 1;
        grid[i][0] = 1;
        cout << grid[0][i] << " ";
    }
    cout << endl;
    
    for(int i = 1; i < n; i++) {
        cout << grid[i][0] << " ";
        for(int j = 1; j < n; j++) {
            grid[i][j] = grid[i-1][j] + grid[i][j-1] + grid[i-1][j-1];
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}