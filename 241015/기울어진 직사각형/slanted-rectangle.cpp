#include <iostream>
using namespace std;

int grid[20][20];
int n, maxSum=0;

void maxRectangle(int flag, const int x, const int y, int offsetX, int offsetY, int sum) {
    if(flag == 4) {
        if(sum > maxSum) {
            maxSum = sum;
        }
        return;
    }

    if(x+offsetX < 0 || x+offsetX >= n || y+offsetY < 0 || y+offsetY >= n) 
        return;

    if(flag == 0) {
        maxRectangle(0, x, y, offsetX+1, offsetY-1, sum+grid[y+offsetY][x+offsetX]);
        maxRectangle(1, x, y, offsetX-1, offsetY-1, sum+grid[y+offsetY][x+offsetX]);
    }
    else if(flag == 1) {
        maxRectangle(1, x, y, offsetX-1, offsetY-1, sum+grid[y+offsetY][x+offsetX]);
        maxRectangle(2, x, y, offsetX-1, offsetY+1, sum+grid[y+offsetY][x+offsetX]);
    }
    else if(flag == 2) {
        maxRectangle(2, x, y, offsetX-1, offsetY+1, sum+grid[y+offsetY][x+offsetX]);
        maxRectangle(3, x, y, offsetX+1, offsetY+1, sum+grid[y+offsetY][x+offsetX]);
    }
    else if(flag == 3) {
        if (offsetX == 0 && offsetY == 0)
            maxRectangle(4, x, y, 0, 0, sum);
        else
            maxRectangle(3, x, y, offsetX+1, offsetY+1, sum+grid[y+offsetY][x+offsetX]);
    }
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    for(int i = 2; i < n; i++) {
        for(int j = 1; j < n-1; j++) {
            maxRectangle(0, j, i, 0, 0, 0);
        }
    }
    cout << maxSum;

    return 0;
}