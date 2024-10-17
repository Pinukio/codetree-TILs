#include <iostream>
#include <string>
using namespace std;

int n;

// 아름다운 수인지 체크
bool isBeautiful(string seq) {
    int cnt=0, idx=0;
    char item;
    bool isItemSetted = false;
    while(idx < seq.length()) {
        if(!isItemSetted) {
            item = seq[idx];
            isItemSetted = true;
        }

        if(item != seq[idx++]) {
            return false;
        }
        if(++cnt == (item-'0')) {
            isItemSetted = false;
            cnt = 0;
        }
    }

    return !isItemSetted;
}

// 재귀
// 매번 1, 2, 3, 4를 호출, len이 4가 되면 체크
int makeBeautifulNum(string seq) {
    int result = 0;
    char item = '1';

    if(seq.length() == n) 
        return isBeautiful(seq);
    
    for(int i = 0; i < 4; i++) {
        result += makeBeautifulNum(seq+(char)(item+i));
    }
    return result;
}

int main() {
    cin >> n;
    cout << makeBeautifulNum("");
    return 0;
}