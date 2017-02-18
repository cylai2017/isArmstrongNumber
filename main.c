
#include <stdio.h>

int isArmstrongNumber(int number){
    // Maximum digits are 39.
    int digits[39];
    double tmp_number = number;
    // put the number of each digit into digits[39]
    int Index_1;
    for(Index_1 = 0; tmp_number != 0; Index_1++) {
        digits[Index_1] = (int) tmp_number % 10;
        tmp_number = (int) (tmp_number / 10);
    }
    // sum = pow(digits[1],2) + pow(digits[2],2) + pow(digits[3],2) + ... + pow(digits[number_digits],2)
    double sum = 0.0;
    for(int Index_2 = 0; Index_2 <= Index_1; Index_2++) {
        sum += pow(digits[Index_2], Index_1);
    }
    // return 0 -> The number is not Armstrong number ; return 1 -> The number is Armstrong number
    return sum == number;
}
