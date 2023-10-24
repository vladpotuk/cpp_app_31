#include <iostream>
#include<Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    const int size = 3; 

    int array[size][size];

    
    int value = size; 
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            array[i][j] = value;
            value *= 2;
        }
    }
    std::cout << "Створений масив:" << std::endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

