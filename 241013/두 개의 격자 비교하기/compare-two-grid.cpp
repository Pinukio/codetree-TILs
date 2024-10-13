#include <iostream>
using namespace std;

int main() {
    int n, m, i, j, input;
    cin >> n >> m;
    int inputArr[100][100], resultArr[100][100];
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cin >> inputArr[i][j];
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cin >> input;
            cout << !(input == inputArr[i][j]) << " ";
        }
        cout << endl;
    }

    return 0;
}