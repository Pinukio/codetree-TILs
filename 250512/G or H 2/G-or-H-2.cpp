#include <iostream>

using namespace std;

int N;
int pos[100];
char alpha[100];

bool isSatisfied(int startPos, int endPos) {
    int GCount = 0;
    int HCount = 0;
    for(int i = 0; i < N; i++) {
        if(pos[i] < startPos || pos[i] > endPos) continue;
        if(alpha[i] == 'G') GCount++;
        else if(alpha[i] == 'H') HCount++;
    }
    if(GCount == 0 || HCount == 0 || GCount == HCount) return true;
    return false;
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> pos[i] >> alpha[i];
    }

    // Please write your code here.
    if(N == 1) {
        cout << 0;
        return 0;
    }

    int maxLength = 0;
    int length = 0;
    int startPos;
    int endPos;

    for(int i = 0; i < N; i++) {
        for(int j = i+1; j < N; j++) {
            startPos = pos[i];
            endPos = pos[j];
            if(endPos < startPos) {
                int tmp = endPos;
                endPos = startPos;
                startPos = tmp;
            }
            if(isSatisfied(startPos, endPos)) {
                length = endPos-startPos;
                maxLength = max(length, maxLength);
            }
        }
    }
    cout << maxLength;
    return 0;
}