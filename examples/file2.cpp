#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;
public:
    void set_values(int, int);
    int area() {
        return width * height;
    }
};

void Rectangle::set_values(int w, int h) {
    width = w;
    height = h;
}

int main() {
    Rectangle rect;
    rect.set_values(3, 4);
    cout << "Area: " << rect.area() << endl;
    return 0;
}
