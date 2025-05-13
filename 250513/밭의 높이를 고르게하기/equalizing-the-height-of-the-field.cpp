#include <iostream>
#include <climits>

using namespace std;

int N, H, T;
int arr[100];

int cost(int startIdx, int endIdx) {
    int sum = 0;
    for(int i = startIdx; i <= endIdx; i++) {
        sum += abs(H-arr[i]);
    }
    return sum;
}

int main() {
    cin >> N >> H >> T;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int minCost = INT_MAX;

    for(int i = 0; i < N; i++) {
        for(int j = i+T-1; j < N; j++) {
            minCost = min(cost(i, j), minCost);
        }
    }
    cout << minCost;
    return 0;
}