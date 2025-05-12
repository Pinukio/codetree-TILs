#include <iostream>

using namespace std;

int N, M;
int A[100], B[100];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < M; i++) cin >> B[i];

    // Please write your code here.
    int count = 0;
    bool isBeautiful = true;
    bool isThere = false;

    for(int i = 0; i <= N-M; i++) {
        isBeautiful = true;
        for(int j = 0; j < M; j++) {
            isThere = false;
            for(int k = 0; k < M; k++) {
                if(A[i+j] == B[k]) {
                    isThere = true;
                    break;
                }
            }
            if(!isThere) {
                isBeautiful = false;
                break;
            }
        }
        if(isBeautiful) count++;
    }

    cout << count;
    return 0;
}