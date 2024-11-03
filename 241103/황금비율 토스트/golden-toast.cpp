#include <iostream>
#include <list>
using namespace std;

int main() {
    int num_list, num_inst;
    cin >> num_list, num_inst;
    list<char> cList;
    char input, inst;
    for(int i = 0; i < num_list; i++) {
        cin >> input;
        cList.push_back(input);
    }
    // List 사이를 가리키는 iterator를 구현하기 위해 크기를 1 늘림
    cList.push_back('');
    list<char>::iterator it = cList.end();

    for(int i = 0; i < num_inst; i++) {
        cin >> inst;
        switch(inst) {
            case 'L':
                if(it != cList.begin())
                    it--;
                break;
            case 'R':
                if(it != cList.end())
                    it++;
                break;
            case 'D':
                if(*it != '')
                    it = cList.erase(it);
                break;
            case 'P':
                cin >> input;
                cList.insert(it, input);
                break;
        }
    }
    return 0;
}