/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 29
Date of submission - 16-09-2026*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 8

void findOnesComplement(char binary[], char ones[]);
void findTwosComplement(char ones[], char twos[]);
void binaryAddition(char bin1[], char bin2[], char result[]);

int main() {
    char binary1[SIZE + 1], binary2[SIZE + 1];
    char ones1[SIZE + 1], twos1[SIZE + 1];
    char ones2[SIZE + 1], twos2[SIZE + 1];
    char sum[SIZE + 1], diff[SIZE + 1];

    printf("Pehla %d-bit binary number enter karein: ", SIZE);
    scanf("%s", binary1);
    
    printf("Doosra %d-bit binary number enter karein: ", SIZE);
    scanf("%s", binary2);

    findOnesComplement(binary1, ones1);
    findTwosComplement(ones1, twos1);

    findOnesComplement(binary2, ones2);
    findTwosComplement(ones2, twos2);

    printf("\n--- Two's Complement Results ---\n");
    printf("Original Binary 1:  %s\n", binary1);
    printf("1's Complement 1:   %s\n", ones1);
    printf("2's Complement 1:   %s\n\n", twos1);

    printf("Original Binary 2:  %s\n", binary2);
    printf("1's Complement 2:   %s\n", ones2);
    printf("2's Complement 2:   %s\n", twos2);

    printf("\n--- Binary Arithmetic Operations ---\n");

    binaryAddition(binary1, binary2, sum);
    printf("Addition (%s + %s)       = %s\n", binary1, binary2, sum);

    binaryAddition(binary1, twos2, diff);
    printf("Subtraction (%s - %s)    = %s\n", binary1, binary2, diff);

    return 0;
}

void findOnesComplement(char binary[], char ones[]) {
    for (int i = 0; i < SIZE; i++) {
        if (binary[i] == '0') {
            ones[i] = '1';
        } else {
            ones[i] = '0';
        }
    }
    ones[SIZE] = '\0';
}

void findTwosComplement(char ones[], char twos[]) {
    int carry = 1;
    for (int i = SIZE - 1; i >= 0; i--) {
        if (ones[i] == '1' && carry == 1) {
            twos[i] = '0';
            carry = 1;
        } else if (ones[i] == '0' && carry == 1) {
            twos[i] = '1';
            carry = 0;
        } else {
            twos[i] = ones[i];
        }
    }
    twos[SIZE] = '\0';
}

void binaryAddition(char bin1[], char bin2[], char result[]) {
    int carry = 0;
    for (int i = SIZE - 1; i >= 0; i--) {
        int b1 = bin1[i] - '0';
        int b2 = bin2[i] - '0';
        int sum = b1 + b2 + carry;

        if (sum == 0) {
            result[i] = '0';
            carry = 0;
        } else if (sum == 1) {
            result[i] = '1';
            carry = 0;
        } else if (sum == 2) {
            result[i] = '0';
            carry = 1;
        } else if (sum == 3) {
            result[i] = '1';
            carry = 1;
        }
    }
    result[SIZE] = '\0';
}
