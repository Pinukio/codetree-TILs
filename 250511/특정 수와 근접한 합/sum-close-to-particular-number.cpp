#include <iostream>
#include <climits>

using namespace std;

int N, S;
int arr[100];

int difference(int a, int b) {
    int result = a-b;
    if(result < 0) return result*-1;
    return result;
}

int main() {
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int minDifference = INT_MAX;
    int sum = 0;
    int differ = 0;

    for(int i = 0; i < N; i++) {
        for(int j = i+1; j < N; j++) {
            sum = 0;
            for(int k = 0; k < N; k++) {
                if(k == i || k == j) continue;
                sum += arr[k];
            }
            differ = difference(sum, S);
            if(differ < minDifference) minDifference = differ;
        }
    }
    cout << minDifference;
    return 0;
}