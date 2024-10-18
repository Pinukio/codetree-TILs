#include <iostream>
#include <vector>
using namespace std;

vector<bool> choiceVector;
int n, maxNum=0;
pair<int, int> lines[15];

bool isOverlapped() {
    int x1, x2, x3, x4;
    for(int i = 0; i < n; i++) {
        if(!choiceVector[i])
            continue;
        x1 = lines[i].first;
        x2 = lines[i].second;

        for(int j = i+1; j < n; j++) {
            if(!choiceVector[j])
                continue;
            x3 = lines[j].first;
            x4 = lines[j].second;
            if((x2 >= x3 && x2 <= x4)||(x3 >= x1 && x3 <= x2) || (x1 >= x3 && x1 <= x4) || (x4 >= x1 && x4 <= x2)) 
                return true;
        }
    }
    return false;
}

void maxChoice(int cnt) {
    if(cnt == n) {
        if (!isOverlapped()) {
            int ones = 0;
            for(int i = 0; i < n; i++) {
                ones += choiceVector[i];
            }
            maxNum = (ones > maxNum) ? ones : maxNum;
        }
        choiceVector.pop_back();
        return;
    }
    cnt++;
    for(int i = 0; i <= 1; i++) {
        choiceVector.push_back(i);
        maxChoice(cnt);
    }
    choiceVector.pop_back();
}

int main() {
    int a, b;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        lines[i] = make_pair(a, b);
    }

    maxChoice(0);
    cout << maxNum;
    return 0;
}