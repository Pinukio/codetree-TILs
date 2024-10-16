#include <iostream>
using namespace std;

class Rectangle {
    public:
        Rectangle(int centerX, int centerY, int width, int height, int sum) {
            this->centerX = centerX;
            this->centerY = centerY;
            this->width = width;
            this->height = height;
            this->sum = sum;
        }
        int getCenterX() {
            return centerX;
        }
        int getCenterY() {
            return centerY;
        }
        int getWidth() {
            return width;
        }
        int getHeight() {
            return height;
        }
        int getSum() {
            return sum;
        }
    private:
        int centerX, centerY;
        int width, height;
        int sum;
};

bool isOverlapped(Rectangle* r1, Rectangle* r2) {
    for(int i = r1->getCenterY(); i < r1->getCenterY()+r1->getHeight(); i++) {
        // 중복에 해당되지 않는다면 다음으로 넘어감
        if (!(i >= r2->getCenterY() && i <= r2->getCenterY()+r2->getHeight()-1))
            continue;
            
        for(int j = r1->getCenterX(); j < r1->getCenterX()+r1->getWidth(); j++) {
            //마찬가지로 중복되지 않는다면 넘어감
            if(!(j >= r2->getCenterX() && j <= r2->getCenterX()+r2->getWidth()-1))
                continue;
            return true;
        }
    }
    return false;
}

int main() {
    // 높이 1
    // 25+20+15+10+5
    // 5*5 + 4*5 + 3*5 + 2*5 + 1*5
    // 높이 2
    // 5*4 + 4*4 + 3*4 + 2*4 + 1*4
    // 높이 3
    // 5*3 + 4*3 + 3*3 + 2*3 + 1*3
    // 225개의 조합
    int n, m, grid[5][5], sum=0, cnt=0;
    Rectangle* rectangles[225];
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    bool success = true;
    // 모든 직사각형 구하기
    // 중심 좌표 설정
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            // 크기 설정
            for(int height = 1; height <= n; height++) {
                for(int width = 1; width <= m; width++) {
                    sum = 0;
                    success = true;
                    // 이동하며 값 계산
                    for(int y = i; y < i+height; y++) {
                        for(int x = j; x < j+width; x++) {
                            if(y >= n || x >= m)
                                success = false;
                            sum += grid[y][x];
                        }
                    }
                    if(success) {
                        rectangles[cnt++] = new Rectangle(j, i, width, height, sum);
                    }
                }
            }
        }
    }

    int maxSum;
    maxSum = 0x80000000;

    for(int i = 0; i < cnt; i++) {
        for(int j = i+1; j < cnt; j++) {
            // 중복되지 않는 경우에만
            if(!isOverlapped(rectangles[i], rectangles[j])) {
                sum = rectangles[i]->getSum() + rectangles[j]->getSum();
                maxSum = (sum > maxSum) ? sum : maxSum;
            }
        }
    }
    cout << maxSum;
    return 0;
}