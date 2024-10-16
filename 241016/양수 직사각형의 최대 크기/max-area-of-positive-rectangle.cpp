#include <iostream>
using namespace std;

int main() {
    int n, m, grid[20][20];
    cin >> n >> m;
    for(int i  = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    bool isPos = false;
    int size = 0;
    int maxSize = 0;

    // 중심점 설정
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            // 높이, 너비 설정
            for(int height = 0; height < n; height++) {
                for(int width = 0; width < m; width++) {
                    // 확인
                    isPos = true;
                    for(int y = i; y <= i+height; y++) {
                        for(int x = j; x <= j+width; x++) {
                            if((y >= n || x >= m) || (grid[y][x] <= 0))
                                isPos = false;
                        }
                    }
                    if(isPos) {
                        size = (width+1)*(height+1);
                        maxSize = (size > maxSize) ? size : maxSize;
                    }
                }
            }
        }
    }
    if(maxSize == 0)
        cout << -1;
    else
        cout << maxSize;
    return 0;
}