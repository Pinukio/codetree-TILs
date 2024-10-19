#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int n, m, c, maxValue=0, halfSum=0;
vector<int> weights;
vector<int> choices;
int grid[10][10];

bool isOverlapped(int x1, int x2, int y1, int y2) {
    return ((y1 == y2) && (abs(x1-x2) < m));
}

bool isRangeOvered(int x) {
    return (x+m > n);
}

// 한쪽에서 얻을 수 있는 최댓값
void getValueSum(int cnt) {
    if(cnt == m) {
        int valueSum = 0;
        int weightSum = 0;
        for(int i = 0; i < m; i++) {
            if(choices[i]) {
                weightSum += weights[i];
                valueSum += pow(weights[i], 2);
            }
        }
        if ((weightSum <= c) && (valueSum > halfSum)) 
            halfSum = valueSum;
        
        choices.pop_back();
        return;
    }
    cnt++;
    for(int i = 0; i <= 1; i++) {
        choices.push_back(i);
        getValueSum(cnt);
    }
    if(cnt > 1)
        choices.pop_back();
}

void makeMaxValue() {
    int value = 0;
    for(int y1 = 0; y1 < n; y1++) {
        for(int x1 = 0; x1 < n; x1++) {
            if(isRangeOvered(x1))
                break;
            for(int y2 = y1; y2 < n; y2++) {
                for(int x2 = 0; x2 < n; x2++) {
                    //cout << "y1: " << y1 << " x1: " << x1 << " y2: " << y2 << " x2: " << x2 << endl;
                    if(isRangeOvered(x2))
                        break;
                    if(isOverlapped(x1, x2, y1, y2))
                        continue;
                    for(int i = 0; i < m; i++) {
                        weights.push_back(grid[y1][x1+i]);
                    }
                    halfSum = 0;
                    getValueSum(0);
                    value = halfSum;
                    weights.clear();
                    
                    for(int i = 0; i < m; i++) {
                        weights.push_back(grid[y2][x2+i]);
                    }
                    halfSum = 0;
                    getValueSum(0);
                    value += halfSum;
                    weights.clear();
                    maxValue = (value > maxValue) ? value : maxValue;
                }
            }
        }
    }
}

int main() {
    cin >> n >> m >> c;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    makeMaxValue();
    cout << maxValue;
    return 0;
}