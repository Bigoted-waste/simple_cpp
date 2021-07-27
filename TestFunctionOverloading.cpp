//
// Created by cola on 2021/7/27.
//

#include <iostream>
using namespace std;

/** 函数重载
 * 在函数原型中不必列出参数的名字，只列出参数类型就可以了
 * @return
 */
int max(int, int);

double max(double num1, double num2);

double max(double num1, double num2, double num3);

int max(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

double max(double num1, double num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

double max(double num1, double num2, double num3) {
    return max(max(num1, num2), num3);
}

int TestFunctionOver() {
    cout << "The maximum between 3 and 4 is" << max(3, 4) << endl;

    cout << "The maximum between 3.0 and 5.4 is"
         << max(3.0, 5.4) << endl;

    cout << "The maximum between 3.0 , 5.4 and 10.14 is"
         << max(3.0, 4.5, 10.143) << endl;
}