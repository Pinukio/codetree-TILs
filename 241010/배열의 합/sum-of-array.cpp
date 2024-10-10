#include <iostream>
using namespace std;

int main() {
    int size = 4;
    int grid[4][4];
    int sum, value;

    int i, j;
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            cin >> value;
            grid[i][j] = value;
        }
    }

    for(i = 0; i < size; i++) {
        sum = 0;
        for(j = 0; j < size; j++) {
            sum += grid[i][j];
        }
        cout << sum << endl;
    }
    
    return 0;
}