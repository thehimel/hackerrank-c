/*
https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?h_r=next-challenge&h_v=zen

Task: Given a positive integer, return the sum of the digits.

Input
10564

Output
16
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int num, last_digit;
    scanf("%d", &num);

    int sum = 0;

    while(num > 0){
        last_digit = num % 10;
        sum += last_digit;
        num /= 10;
    }

    printf("%d", sum);

    return 0;
}