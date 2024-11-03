#include <iostream>
#include <list>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    list<int> lst;
    int N, input;
    string inst;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> inst;
        if(inst == "push_back") {
            cin >> input;
            lst.push_back(input);
        }
        else if(inst == "push_front") {
            cin >> input;
            lst.push_front(input);
        }
        else if(inst == "pop_front") {
            cout << lst.front() << endl;
            lst.pop_front();
        }
        else if(inst == "pop_back") {
            cout << lst.back() << endl;
            lst.pop_back();
        }
        else if(inst == "front") {
            cout << lst.front() << endl;
        }
        else if(inst == "back") {
            cout << lst.back() << endl;
        }
        else if(inst == "size") {
            cout << lst.size() << endl;
        }
        else if(inst == "empty") {
            cout << lst.empty() << endl;
        }
    }
    return 0;
}