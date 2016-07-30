//
//  main.cpp
//  tutorialC++-Armstrong_number
//
//  Created by WeiTingChen on 2016/7/30.
//  Copyright © 2016年 WeiTingChen. All rights reserved.
//

#include <iostream>
#include <math.h>

void sizeOfDataType(){
    std::cout << "Size Of Data Type:" << std::endl;
    int size_int = sizeof(size_int);
    double size_double = sizeof(size_double);
    long double size_long_double = sizeof(size_long_double);
    long size_long = sizeof(size_long);
    long int size_long_int = sizeof(size_long_int);
    std::cout << "\tsize of int:\t\t" << size_int << std::endl;
    std::cout << "\tsize of double:\t\t" << size_double << std::endl;
    std::cout << "\tsize of ling double:\t" << size_long_double << std::endl;
    std::cout << "\tsize of long:\t\t" << size_long << std::endl;
    std::cout << "\tsize of long int:\t" << size_long_int << std::endl;
    std::cout << "\n\n" << std::endl;
}

void armstrongNumber(){
    std::cout << "Start to find Armstrong number" << std::endl;
    std::cout << "The range is 100 to 999." << std::endl;

    long double number = 99;
    
    int *digit = nullptr;
    
    while (number < 1000) {
        number++;
        
        // how much is the number's digit
        int number_copy = number;
        char digit_i = 1;
        while (number_copy >= 10){
            number_copy = number_copy / 10;
            digit_i++;
        }
        
        // digit's number saparate
        digit = (int *)malloc(sizeof(int) * digit_i);
        number_copy = number;
        for (int i = digit_i; i > 0; i--) {
            digit[i] = number_copy / pow(10, i - 1);
            number_copy = number_copy % (int)pow(10, i - 1);
        }
        
        // if it is Armstrong number then print it out
        long double sum = (pow(digit[3], 3) + pow(digit[2], 3) + pow(digit[1], 3));
        
        if (number == 153) {
            std::cout << sum << " "<< digit[3] << " " << digit[2] << " " << digit[1] <<std::endl;
        }
        
        if (sum == number) {
            std::cout << number << std::endl;
        }
    }
    free(digit);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    sizeOfDataType();
    
    armstrongNumber();
    
    
    
    return 0;
}


