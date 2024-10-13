#include <iostream>
using namespace std;

int main() {
    int n, grid[10][10];
    cin >> n;
    int i, j, item=1;
    bool reverse = true;
    for(i = n-1; i >= 0; i--) {
        if(reverse)
            for(j = n-1; j >= 0; j--) {
                grid[j][i] = item++;
            }
        else
            for(j = 0; j < n; j++) {
                grid[j][i] = item++;
            }
        reverse = !reverse;
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}