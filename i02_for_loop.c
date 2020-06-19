/*
https://www.hackerrank.com/challenges/for-loop-in-c/problem

Task: Two positive integers a and b are given.
Print the numbers in words from a to b if 0 <= number <= 9.
Else print even or odd.

Input:
8
11

Output:
eight
nine
even
odd
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


const char* even_or_odd(int num){
    return num % 2 == 0 ? "even" : "odd";
}


int main(){
    int a, b;
    scanf("%d\n%d", &a, &b);

    if (a < 0 || b < 0) {
        return 0;
    }

    char numbers[10][6] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"};

    int i;

    for (i=a; i<=b; i++){
        if(i <= 9){
            printf("%s\n", numbers[i]);
        }else{
            printf("%s\n", even_or_odd(i));
        }
    }

    return 0;
}
