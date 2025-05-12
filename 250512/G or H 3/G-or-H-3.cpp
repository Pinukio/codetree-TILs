#include <iostream>

using namespace std;
#define LOCATION_MAX 10000

int N, K;
int x[100];
char c[100];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> c[i];
    }

    // Please write your code here.
    int score = 0;
    int maxScore = -1;

    for(int i = 1; i <= LOCATION_MAX-K; i++) {
        score = 0;
        for(int j = 0; j < N; j++) {
            if(x[j] < i || x[j] > i+K) continue;

            if(c[j] == 'G') score += 1;
            else if(c[j] == 'H') score += 2;
        }
        if(score>maxScore) maxScore = score;
    }
    cout << maxScore;
    return 0;
}