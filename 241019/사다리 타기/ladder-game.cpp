#include <iostream>
#include <vector>
using namespace std;

vector<int> result;

int n, m, minEdge=0x7FFFFFFF;
vector<bool> choices;
pair<int, int> edges[15];

vector<int> simulate(pair<int, int> testEdges[15], int size) {
    int x, y;

    vector<int> resultVector;
    for(int i = 1; i <= n; i++) {
        int player_x = i;
        int player_y = 15;

        while(player_y > 0) {
            for(int j = 0; j < size; j++) {
                x = testEdges[j].first;
                y = testEdges[j].second;

                if((player_y == y)) {
                    if(player_x == x) {
                        player_x++;
                    }
                    else if(player_x == x+1) {
                        player_x--;
                    }
                }
            }
            player_y--;
        }
        resultVector.push_back(player_x);
    }
    return resultVector;
}

bool isEqual(vector<int> vector1, vector<int> vector2) {
    if(vector1.size() != vector2.size())
        return false;
    for(int i = 0; i < vector1.size(); i++) {
        if(vector1[i] != vector2[i])
            return false;
    }
    return true;
}

void getMinEdges(int cnt) {
    if(cnt == m) {
        pair<int, int> testEdges[15];
        int idx = 0;
        
        for(int i = 0; i < m; i++) {
            if(choices[i]) {
                testEdges[idx++] = edges[i];
            }
        }
        vector<int> testResult = simulate(testEdges, idx);
        
        if(isEqual(result, testResult)) {
            minEdge = (idx < minEdge) ? idx : minEdge;
        }
        choices.pop_back();
        return;
    }
    cnt++;
    for(int i = 0; i <= 1; i++) {
        choices.push_back(i);
        getMinEdges(cnt);
    }
    choices.pop_back();
}

int main() {
    int a, b;
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        edges[i] = make_pair(a, b);
    }

    result = simulate(edges, m);
    getMinEdges(0);
    cout << minEdge;
    return 0;
}