//
// Created by cola on 2021/7/27.
//

#include <iostream>

using namespace std;

int AnalyzeNumbers() {
    const int NUMBER_OF_ELEMENTS = 100;
    double numbers[NUMBER_OF_ELEMENTS];
    double sum = 0;

    for (int i = 0; i < NUMBER_OF_ELEMENTS; i++) {
        cout << "Enter a new numbers : ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    double average = sum / NUMBER_OF_ELEMENTS;

    int count = 0;
    for (int i = 0; i < NUMBER_OF_ELEMENTS; i++) {
        if (numbers[i] > average)
            count++;
    }

    cout << "Average is " << average << endl;
    cout << "Number of elements above the average" << count << endl;

    return 0;
}

const int COLUMN_SIZE = 4;

int sumTest(const int a[][COLUMN_SIZE], int rowSize) {
    int total = 0;
    for (int row = 0; row < rowSize; row++) {
        for (int column=0; column < COLUMN_SIZE; column++) {
            total += a[row][column];
        }
    }
    return total;
}

int PassTwoDimensionalArray(){
    const int ROW_SIZE=3;
    int m[ROW_SIZE][COLUMN_SIZE];
    cout<<"Enter "<<ROW_SIZE<<"rows and "
    <<COLUMN_SIZE<<" columns: "<<endl;
    for(int i=0;i<ROW_SIZE;i++){
        for(int j=0;j<COLUMN_SIZE;j++){
            cin>>m[i][j];
        }
    }
    int sum= sumTest(m,ROW_SIZE);
    cout<<"\nSum fo all element is "<<sum<<endl;
    return 0;
}