#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Rectangle {
    int length;
    int width;
    int index;
};

bool compareRectangles(const Rectangle& r1, const Rectangle& r2) {
    int area1 = r1.length * r1.width;
    int area2 = r2.length * r2.width;

    if (area1 == area2) {
        int perimeter1 = 2 * (r1.length + r1.width);
        int perimeter2 = 2 * (r2.length + r2.width);
        return perimeter1 > perimeter2;
    }
    return area1 > area2;
}

int main() {
    int n;
    cin >> n;

    vector<Rectangle> rectangles(n);

    for (int i = 0; i < n; i++) {
        cin >> rectangles[i].length >> rectangles[i].width;
        rectangles[i].index = i + 1;
    }

    sort(rectangles.begin(), rectangles.end(), compareRectangles);

    for (int i = 0; i < n; i++) {
        cout << rectangles[i].index << endl;
    }

    return 0;
}
