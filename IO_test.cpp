//
// Created by cola on 2021/7/27.
//

#include <iostream>
#include <fstream>

using namespace std;

/**
 * 写入文件
 * //当没有这个文件会自动创建文件
 * @return
 */
int SimpleFileOutput() {
    ofstream output;
    output.open("numbers.txt");
    output << 95 << " " << 56 << " " << 34 << endl;
    output.close();
    cout << "Done" << endl;
    return 0;
}

/**
 * 读文件
 * 当没有这个文件会报： unexpected error
 * @return
 */
int SimpleFileInput() {
    ifstream input;
    input.open("numbers.txt");
    int score1, score2, score3;
    input >> score1;
    input >> score2;
    input >> score3;

    cout << "Total score is " << score1 + score2 + score3 << endl;

    input.close();
    cout << "Done" << endl;
    return 0;
}

int ReadAllData() {
    ifstream input("numbers.txt");

    double sum = 0;
    double number;
    while (!input.eof()) {  //eof()判断input函数结束
        input >> number;
        cout << number << " ";
        sum += number;
    }
    input.close();

    cout << "\n Sum is" << sum << endl;
    return 0;
}
