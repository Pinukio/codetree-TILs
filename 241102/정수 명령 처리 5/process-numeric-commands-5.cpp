#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int N, input;
    string inst;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> inst;
        if(inst == "push_back") {
            cin >> input;
            v.push_back(input);
        }
        else if(inst == "pop_back") {
            v.pop_back();
        }
        else if(inst == "get") {
            cin >> input;
            cout << v[input-1] << endl;
        }
        else if(inst == "size") {
            cout << v.size() << endl;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}