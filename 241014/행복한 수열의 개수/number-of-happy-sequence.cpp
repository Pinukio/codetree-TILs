#include <iostream>
using namespace std;

int main() {
    int n, m, grid[100][100], cntRow, cntCol, result=0, maxRow=0, maxCol=0;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        cntRow = cntCol = 1;
        maxRow = maxCol = 1;
        for(int j = 0; j < n-1; j++) {
            // row
            if (grid[i][j] == grid[i][j+1]) {
                if(++cntRow > maxRow)
                    maxRow = cntRow;
            }
                
            else {
                cntRow = 1;
            }

            if(grid[j][i] == grid[j+1][i]) {
                if(++cntCol > maxCol)
                    maxCol = cntCol;
            }
            else 
                cntCol = 1;
        }
        result += (maxRow >= m) + (maxCol >= m);
    }

    cout << result;
    return 0;
}