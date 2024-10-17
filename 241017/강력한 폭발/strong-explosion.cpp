#include <iostream>
#include <vector>
using namespace std;

int grid[20][20], n, num_one=0;
vector<int> v;

int calculate() {
    int copyGrid[20][20];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            copyGrid[i][j] = grid[i][j];
        }
    }
    int cnt = 0;
    // vector를 기반으로 grid 세팅
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(copyGrid[i][j])
                copyGrid[i][j] = v[cnt++];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(copyGrid[i][j] == 1) {
                for(int k = i-2; k < i; k++) {
                    if(k >= 0 && k < n && !copyGrid[k][j])
                        copyGrid[k][j] = 4;
                }
                for(int k = i+1; k <= i+2; k++) {
                    if(k >= 0 && k < n && !copyGrid[k][j])
                        copyGrid[k][j] = 4;
                }
            }
            else if(copyGrid[i][j] == 2) {
                int k = i-1;
                if(k >= 0 && k < n && !copyGrid[k][j])
                    copyGrid[k][j] = 4;

                k = i+1;
                if(k >= 0 && k < n && !copyGrid[k][j])
                    copyGrid[k][j] = 4;

                k = j-1;
                if(k >= 0 && k < n && !copyGrid[i][k])
                    copyGrid[i][k] = 4;

                k = j+1;
                if(k >= 0 && k < n && !copyGrid[i][k])
                    copyGrid[i][k] = 4;

            }
            else if(copyGrid[i][j] == 3) {
                int k = i-1;
                int l = j-1;
                if(k >= 0 && k < n && l >= 0 && l < n && !copyGrid[k][l])
                    copyGrid[k][l] = 4;
                
                l = j+1;
                if(k >= 0 && k < n && l >= 0 && l < n && !copyGrid[k][l])
                    copyGrid[k][l] = 4;
                
                k = i+1;
                if(k >= 0 && k < n && l >= 0 && l < n && !copyGrid[k][l])
                    copyGrid[k][l] = 4;

                l = j-1;
                if(k >= 0 && k < n && l >= 0 && l < n && !copyGrid[k][l])
                    copyGrid[k][l] = 4;
            }
        }
    }

    int result = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(copyGrid[i][j])
                result++;
        }
    }
    return result;
}

int maxSum(int cnt) {
    if(cnt++ == num_one) {
        v.pop_back();
        return calculate();
    }

    int max = 0;

    for(int i = 1; i <= 3; i++) {
        v.push_back(i);
        int sum = maxSum(cnt);
        max = (sum > max) ? sum : max;
    }
    v.pop_back();
    return max;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
            if(grid[i][j])
                num_one++;
        }
    }

    cout << maxSum(0);
    return 0;
}