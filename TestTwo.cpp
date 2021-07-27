//
// Created by cola on 2021/7/25.
//

#include <iostream>
#include <climits>
#include <cfloat>
#include <cstdio>
#include <ctime>
#include <cctype>
#include <string>
#include <iomanip>

using namespace std;


/**
 * 单个cin例子
 * @return
 */
int ComputeAreaWithConsoleInput() {
    double radius;
    cout << "Enter a radius" << endl;
    /**
     * cin： 标准控制台输入的意思.符号>>称为流提取运算符，用来将输入内容赋予一个变量.
     */
    cin >> radius;
    double area = radius * radius * 3.14159;
    cout << "The area is " << area << endl;
    return 0;
}

/**
 * 多个cin例子
 * @return
 */
int ComputeAverage() {
    //大多数程序分三个步骤执行：输入，处理和输出，称为IPO
    double number1, number2, number3;
    cout << "Enter three numbers: ";
    cin >> number1 >> number2 >> number3;

    double average = (number3 + number2 + number1) / 3;

    cout << "The average of " << number1 << " " << number2
         << " " << number3 << "is" << average << endl;
    return 0;
}

/**
 * constant：常量
 * @return
 */
int ComputeAreaWithConstant() {
    const double PI = 3.14159;
    double radius;
    cout << "Enter a radius" << endl;
    cin >> radius;
    double area = radius * radius + PI;

    cout << "The area is" << area << endl;
    return 0;
}

/**
 * 常用常量
 *  #include <climits>  #include <cfloat> 需要使用这两个库
 * @return
 */
int LimitsDemo() {
    cout << "INT16_MIN is " << INT16_MIN << endl;
    cout << "INT16_MAX is " << INT16_MAX << endl;
    cout << "LONG_MAX is " << LONG_MAX << endl;
    cout << "LONG_MIN is " << LONG_MIN << endl;
    cout << "FLT_MAX is " << FLT_MAX << endl;
    cout << "FLT_MIN is " << FLT_MIN << endl;
    cout << "DBL_MIN is " << DBL_MIN << endl;
    cout << "DBL_MAX is " << DBL_MAX << endl;
    return 0;
}

/**
 * Size()方法的使用
 * @return
 */
int SizeDemo() {
    cout << "The size of int: " << sizeof(int) << " bytes" << endl;
    cout << "The size of long: " << sizeof(long) << " bytes" << endl;
    cout << "The size of double: " << sizeof(double) << " bytes" << endl;

    double area = 5.4;
    cout << "The size of variable area: " << sizeof(area)
         << " bytes" << endl;

    int age = 21;
    cout << "The size of variable age: " << sizeof(age)
         << " bytes" << endl;
    return 0;
}

/**
 * 十六进制
 * @return
 */
int HexadecimalDemo() {
    cout << 0x0011 << " " << 010;
    return 0;
}

/**
 * 显示当前时间
 * @return
 */
int ShowCurrentTime() {
    //从 1970年1月1日开始计算经过多少秒
    int totalSeconds = time(0);

    //得到当前时刻的秒值
    int currentSecond = totalSeconds % 60;

    //得到当前经过总分钟数
    int totalMinutes = totalSeconds / 60;

    //得到当前时刻的分钟值
    int currentMinute = totalMinutes % 60;

    //得到当前经过的总小时数
    int totalHours = totalMinutes / 60;

    //得到当前时刻的小时
    int currentHour = totalHours % 24;


    cout << "当前时间  " << currentHour << ":"
         << currentMinute << ":" << currentSecond << " GMT" << endl;

}

/**
 * 强制转换运算符
 * static_cast<type>(value)
 * @return
 */
int SalesTax() {
    cout << static_cast<int>(1.7) << endl;
    cout << "---------经过static_cast<type>(value) 1/2的结果区别-------------" << endl;
    cout << " static_cast<double>(1)/2: " << static_cast<double>(1) / 2 << endl;
    cout << " 1/2: " << 1 / 2 << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << (int) 5.4 << endl;
    cout << static_cast<int>(5.4) << endl;
    cout << "--------------------------------------------------------------" << endl;
}

/**
 * switch例子 计算属相
 * @return
 */
int ChineseZodiac() {
    cout << "Enter a year" << endl;
    int year;
    cin >> year;

    switch (year % 12) {
        case 0:
            cout << "monkey" << endl;
            break;
        case 1:
            cout << "rooster" << endl;
            break;
        case 2:
            cout << "dog" << endl;
            break;
        case 3:
            cout << "pig" << endl;
            break;
        case 4:
            cout << "rat" << endl;
            break;
        case 5:
            cout << "ox" << endl;
            break;
        case 6:
            cout << "tiger" << endl;
            break;
        case 7:
            cout << "rabbit" << endl;
            break;
        case 8:
            cout << "dragon" << endl;
            break;
        case 9:
            cout << "snake" << endl;
            break;
        case 10:
            cout << "horse" << endl;
            break;
        case 11:
            cout << "sheep" << endl;
            break;
    }
}

int Demo01() {
    /**
     * 特殊字符的转移序列
     */
    cout << " \"双引号\" " << endl;
    cout << " \t 制表符" << endl;
    cout << "welcome to c++\n";
    cout << "welcome to c++" << endl;

    /**
     * 数值类型和字符类型之间的相互转换
     */
    char a = 0xFF41;
    cout << a << endl;

    char b = 65.25;  //先将浮点数转变成int类型，然后在转成char类型
    cout << b << endl;

}

/**
 * 输入一个小写字母，把小写字母转变成大写字母
 * @return
 */
int ToUppercase() {
    cout << "Enter a lowercase letter" << endl;
    char lowercaseLetter;
    cin >> lowercaseLetter;
    char uppercaseLatter =
            static_cast<char>('A' + (lowercaseLetter - 'a'));

    cout << "The corresponding uppercase letter is: "
         << uppercaseLatter << endl;
    return 0;
}

/**
 * 输入一个数字或者大小写字母，判断它是什么?如果是输入是小写把变为大写，如果是大写把把变为小写
 * @return
 */
int CharacterFunctions() {
    cout << "Enter a character: ";
    char ch;
    cin >> ch;
    cout << "You entered " << ch << endl;

    if (islower(ch)) {
        cout << "It is a lowercase letter" << endl;
        cout << "Its equivalent uppercase letter is " <<
             static_cast<char>(toupper(ch)) << endl;
    } else if (isupper(ch)) {
        cout << "It is an uppercase letter" << endl;
        cout << "Its equivalent lowercase letter is " <<
             static_cast<char>(tolower(ch)) << endl;
    } else if (isdigit(ch)) {
        cout << "It is a digit character" << endl;
    }
    return 0;
}

int StringDemo() {
    //字符串的索引和下标操作符，连接字符串
    string message = "Welcome to C++";
    message += "and programming fun";
    cout << message.length() << endl;
    cout << message.at(0) << endl;

    //比较字符串
    string s1 = "ABC";
    string s2 = "ABE";
    cout << (s1 == s2) << endl;
    cout << (s1 != s2) << endl;
    cout << (s1 >= s2) << endl;
    cout << (s1 > s2) << endl;
    cout << (s1 <= s2) << endl;
    cout << (s1 < s2) << endl;
}

int OrderTwoCities() {
    string city1, city2;
    cout << "Enter the First city: ";
    getline(cin, city1);
    cout << "Enter the second city: ";
    getline(cin, city2);

    cout << "the cities in alphabetical order are : ";
    if (city1 < city2)
        cout << city1 << " " << city2 << endl;
    else
        cout << city2 << " " << city1 << endl;
    return 0;
}

/**
 * 格式化控制台
 * @return
 */
int SystemOut() {
    double amount = 12618.98;
    double interestRate = 0.0013;
    double interest = amount * interestRate;
    /**
     *  #include <iomanip>  c++提供了附加函数来格式化一个要显示的值，这些函数叫做流函数
     *      setprecision(n):设定一个浮点数操作的精度
     *      fixed : 显示指定小数位数的浮点数
     *      showpoint ： 即使没有小数部分也显示以零不足的小数点后位数
     *      setw（width） ： 指定打印字段的宽度
     *      left ： 调整输出到左边
     *      right ： 调整输出到右边
     *
     */

    cout << "Interest is " << fixed << setprecision(2)
         << interest << endl;
}

/**
 * Break例子
 * @return
 */
int TestBreak() {
    int sum = 0;
    int number = 0;
    while (number < 20) {
        number++;
        sum += number;
        if (sum >= 100)
            break;
    }
    cout << "The number is " << number << endl;
    cout << "The sum is " << sum << endl;
}

/**
 * continue例子
 * @return
 */
int TestContinue(){
    int sum=0;
    int number=0;

    while (number<20){
        number++;
        if(number==10||number==11){
            continue;
        }
        sum+=number;
    }
    cout<<"The sum is "<<sum<<endl;
    return 0;
}
