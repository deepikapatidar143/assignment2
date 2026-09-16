/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 17
Date of submission - 16-09-2026*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void convertBelowThousand(long long num) {
    char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", 
                    "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if (num >= 100) {
        printf("%s hundred ", ones[num / 100]);
        num %= 100;
    }

    if (num >= 20) {
        printf("%s ", tens[num / 10]);
        if (num % 10 > 0) {
            printf("%s ", ones[num % 10]);
        }
    } else if (num > 0) {
        printf("%s ", ones[num]);
    }
}

int main(int argc, char *argv[]) {
    long long num;

    if (argc >= 2) {
        num = atoll(argv[1]);
    } else {
        if (scanf("%lld", &num) != 1) {
            return 1;
        }
    }

    if (num < -999999999 || num > 999999999) {
        return 1;
    }

    if (num == 0) {
        printf("zero\n");
        return 0;
    }

    if (num < 0) {
        printf("negative ");
        num = -num;
    }

    if (num >= 1000000) {
        convertBelowThousand(num / 1000000);
        printf("million ");
        num %= 1000000;
    }

    if (num >= 1000) {
        convertBelowThousand(num / 1000);
        printf("thousand ");
        num %= 1000;
    }

    if (num > 0) {
        convertBelowThousand(num);
    }

    printf("\n");
    return 0;
}
