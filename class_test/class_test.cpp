#include <iostream>

using namespace std;

// 基类
class Shape {

    protected :
        int width;
        int height;

    public :
        void setWidth(int w) {
            width = w;
        }
        void setHeight(int h) {
            height = h;
        }
};

// 派生类
class Rectange : public Shape {
    public : 
        int getArea() {
            return (width * height);
        }
};

int main() {
    Rectange Rect;

    Rect.setWidth(5);
    Rect.setHeight(10);

    cout << "Total area: " << Rect.getArea() << endl;

    return 0; 
}
