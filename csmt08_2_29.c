#include <stdio.h>

void makeOnes(char bin[], char ones[]) {
    for (int i = 0; i < 8; i++) {
        if (bin[i] == '0') ones[i] = '1';
        else ones[i] = '0';
    }
    ones[8] = '\0';
}

void makeTwos(char ones[], char twos[]) {
    int carry = 1;
    for (int i = 7; i >= 0; i--) {
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
    twos[8] = '\0';
}

void addBinary(char bin1[], char bin2[], char result[]) {
    int carry = 0;
    for (int i = 7; i >= 0; i--) {
        int v1 = bin1[i] - '0';
        int v2 = bin2[i] - '0';
        int total = v1 + v2 + carry;

        if (total == 0) { result[i] = '0'; carry = 0; }
        else if (total == 1) { result[i] = '1'; carry = 0; }
        else if (total == 2) { result[i] = '0'; carry = 1; }
        else if (total == 3) { result[i] = '1'; carry = 1; }
    }
    result[8] = '\0';
}

int main() {
    char num1[9], num2[9];
    char ones1[9], twos1[9];
    char ones2[9], twos2[9];
    char ans_add[9], ans_sub[9];

    printf("Enter first binary number: ");
    scanf("%s", num1);
    
    printf("Enter second binary number: ");
    scanf("%s", num2);

    makeOnes(num1, ones1);
    makeTwos(ones1, twos1);

    makeOnes(num2, ones2);
    makeTwos(num2, twos2);

    printf("\nFirst Number: %s\n", num1);
    printf("1s complement: %s\n", ones1);
    printf("2s complement: %s\n", twos1);

    printf("\nSecond Number: %s\n", num2);
    printf("1s complement: %s\n", ones2);
    printf("2s complement: %s\n", twos2);

    addBinary(num1, num2, ans_add);
    printf("\nAddition result: %s\n", ans_add);

    addBinary(num1, twos2, ans_sub);
    printf("Subtraction result: %s\n", ans_sub);

    return 0;
}
