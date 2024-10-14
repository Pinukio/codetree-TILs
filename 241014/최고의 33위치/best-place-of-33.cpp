#include <iostream>
using namespace std;

#define SIZE 3

int main() {
    int n;
    cin >> n;
    int sum, maxSum=0, grid[20][20];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < n-SIZE+1; i++) {
        for(int j = 0; j < n-SIZE+1; j++) {
            sum = 0;
            for(int k = i; k < i+SIZE; k++) {
                for(int l = j; l < j+SIZE; l++) {
                    sum += grid[k][l];
                }
            }
            if(sum > maxSum)
                maxSum = sum;
        }
    }
    cout << maxSum;
    return 0;
}