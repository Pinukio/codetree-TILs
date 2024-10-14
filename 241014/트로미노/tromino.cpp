#include <iostream>
using namespace std;

int main() {
    int n, m, grid[200][200];
    cin >> n >> m;
    int max=0, sum=0, part=0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    //세로
    for(int i = 0; i < n-2; i++) {
        for(int j = 0; j < m; j++) {
            sum = 0;
            for(int k = 0; k < 3; k++) {
                sum += grid[i+k][j];
            }
            if(sum > max)
                max = sum;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m-1; j++) {
            sum = grid[i][j]+grid[i][j+1];
            
            if(i > 0) {
                // x
                // xx
                if(sum+grid[i-1][j] > max)
                    max = sum+grid[i-1][j];

                //  x
                // xx
                if(sum+grid[i-1][j+1] > max)
                    max = sum+grid[i-1][j+1];
            }

            if(i < n-1) {
                // xx
                // x
                if(sum+grid[i+1][j] > max)
                    max = sum+grid[i+1][j];

                // xx
                //  x
                if(sum+grid[i+1][j+1] > max)
                    max = sum+grid[i+1][j+1];
            }

            if(j > 0) {
                // x xx
                if(sum+grid[i][j-1] > max)
                    max = sum+grid[i][j-1];
            }

            if(j < m-3) {
                // xx x
                // j+2 < m-1
                if(sum+grid[i][j+2] > max)
                    max = sum+grid[i][j+1];
            }

        }
    }
    cout << max;
    
    return 0;
}