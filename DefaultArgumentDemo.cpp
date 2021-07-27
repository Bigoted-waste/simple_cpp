//
// Created by cola on 2021/7/27.
//
#include <iostream>

using namespace std;

/** 缺省参数
 * c++允许在声明函数时指定参数的缺省值。如果函数调用中未给出参数，那么参数的缺省值将被传递给参数
 * @param radius
 */
void printArea(double radius = 1) {
    double area = radius * radius * 3.14159;
    cout << "Area is : " << area << endl;
}

int defaultArgumentDemo() {
    printArea();
    printArea(4);
    return 0;
}

//---------------------------内联函数--------------------------
/**  内联函数：C++提供内联函数提升短函数的性能
 *  编译器会根据可执行代码的长度来判断是否执行内联函数。
 * @param mouth
 * @param year
 */
inline void f(int mouth, int year) {
    cout << "mouth is " << mouth << endl;
    cout << "year is" << year << endl;
}

int InlineDemo() {
    int mouth = 10, year = 2008;
    f(mouth, year);
    f(9, 2010);
    return 0;
}

/**
 * 和上面的函数是等价的
 * @return
 */
int InlineDemo2() {
    int mouth = 10, year = 2008;
    cout << "mouth is " << mouth << endl;
    cout << "year is " << year << endl;
    cout << "mouth is " << 9 << endl;
    cout << "year is " << 2010 << endl;
    return 0;
}
//--------------------------------------------------------
/** 引用变量
 *     引用变量可以被用在函数参数中来引用原变量。
 * 可以通过引用变量来访问和修改存储在变量中的元数据，
 * 一个引用变量实质上是另一个变量的别名，任何对引用
 * 变量的改变实际上都会作到原变量上。
 * @return
 */
int TestReferenceVariable() {
    int count = 1;
    int &r = count;
    cout << "count is " << count << endl;
    cout << "r is " << r << endl;

    r++;
    cout << "count is " << count << endl;
    cout << "r is " << count << endl;

    count = 10;
    cout << "count is " << count << endl;
    cout << "r is " << count << endl;
}

int increment(int &n) {
    n++;
    cout << "n inside the function is" << n << endl;
}

/**
 * 函数传递的两种方式：值传递和引用传递
 * @return
 */
int IncrementWithPassByReference() {
    int x = 1;
    cout << "Before the call ,x is " << x << endl;
    increment(x);
    cout << "After the call , x is" << x << endl;
    return 0;
}

/** 常量引用参数
 * 可以指定一个常量引用参数，以防止变量的数值被恶意修改
 * ×××如果原始的数据类型不需要在函数中改变，就可以简单地声
 */
int max3(const int &number1, const int &number2) {
    int result;

    if (number1 > number2) {
        result = number1;
    } else {
        result = number2;
    }

    return result;
}

int test1() {
    int n1 = 1, n2 = 2;
    cout << n1 <<" :" <<n2 << endl;
    max3(n1,n2);
    cout << n1 <<" :" <<n2 << endl;
}
