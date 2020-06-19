/*
Given a positive integer n. Print the number in word if 1<=n<=9.
Else, print "Greater than 9"
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    char numbers[10][6] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"};

    if (1 <= n && n <= 9) {
        printf("%s", numbers[n]);
    }else{
        printf("Greater than 9");
    }

    return 0;
}
