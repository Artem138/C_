// io.h
#ifndef IO_H
#define IO_H

int readNumber();
void writeAnswer(int);

#endif

// io.cpp
#include "io.h"
#include <iostream>

int readNumber() {
    setlocale(LC_ALL, "RU");
    int num;
    std::cout << "Введите целое число: ";
    std::cin >> num;
    return num;
}

void writeAnswer(int sum) {
    std::cout << "Сумма равна: " << sum << std::endl;
}

// main.cpp
#include "io.h"

int main() {
    int num1 = readNumber();
    int num2 = readNumber();
    int sum = num1 + num2;
    writeAnswer(sum);
    return 0;
}
