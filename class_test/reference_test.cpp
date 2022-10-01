#include <iostream>

using namespace std;

int hls(int& a1, int& a2, int& b1, int& b2) {
    int temp;
    temp = a1 * b2 - a2 * b1;
    return temp;
}
void test_hls() {
    int x1 = 1; int x2 = 2;
    int y1 = 3; int y2 = 4;
    int result;
    result = hls(x1, x2, y1, y2);
    cout << result << endl;
    return;
}

struct Demo
{
    char name[10000];
    int count;
};
void demo_func1(Demo demo) {
    cout << demo.name;
}

void demo_func2(const Demo *demo_p) {
    cout << demo_p->name;
}

void demo_func3(const Demo &demo_ref) {
    cout << demo_ref.name;
}
void test_demo() {
    Demo my_demo = {0};
    Demo *my_demo_p = &my_demo;
    Demo &my_demo_ref = my_demo;

    // 方法1：传递实参
    demo_func1(my_demo);

    // 方法2：传递指针
    demo_func2(my_demo_p);

    // 方法3：传递引用
    demo_func3(my_demo_ref);
}

// 引用作为函数参数
int main() {
    test_demo();
    return 0;
}