#include <iostream>
using namespace std;

#define SIZE 3

int main() {
    string inputs[SIZE];
    int diff, maxDiff = 0;
    for(int i = 0; i < SIZE; i++) {
        cin >> inputs[i];
    }
    for(int i = 0; i < SIZE; i++) {
        for(int j = i+1; j < SIZE; j++) {
            diff = inputs[i].length() - inputs[j].length();
            diff = (diff > 0) ? diff : -diff;
            maxDiff = (diff > maxDiff) ? diff : maxDiff;
        }
    }
    cout << maxDiff;
    return 0;
}