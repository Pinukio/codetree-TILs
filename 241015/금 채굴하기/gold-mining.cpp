#include <iostream>
using namespace std;

int grid[20][20];

int howManyGold(int centerX, int centerY, int n, int k) {
    int gold = 0, cnt=-1;
    for(int i = centerY-k; i <= centerY+k; i++) {
        if(i <= centerY)
            cnt++;
        else
            cnt--;
        if(i < 0 || i >= n)
            continue;

        for(int j = centerX-cnt; j <= centerX+cnt; j++) {
            if(j < 0 || j >= n)
                continue;
            
            gold += grid[i][j];
        }
    }
    return gold;
}

int main() {
    int n, m, maxGold=0, cost, gold, efficiency;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    for(int k = 0; k <= n; k++) {
        cost = k*k + (k+1)*(k+1);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                gold = howManyGold(j, i, n, k);
                efficiency = gold*m - cost;
                if(efficiency >= 0 && gold > maxGold) {
                    maxGold = gold;
                }
            }
        }
    }

    cout << maxGold;

    return 0;
}