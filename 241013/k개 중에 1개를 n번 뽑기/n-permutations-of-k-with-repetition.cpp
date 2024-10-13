#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int N, K;

void Print() {
    for(int i = 0; i < N; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void Choose(int cnt) {
    if(cnt++ == N) {
        Print();
        v.pop_back();
        return;
    }
    for(int i = 1; i <= K; i++) {
        v.push_back(i);
        Choose(cnt);
    }
    v.pop_back();
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> K >> N;
    Choose(0);
    return 0;
}