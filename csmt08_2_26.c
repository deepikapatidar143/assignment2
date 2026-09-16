/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 26
Date of submission - 16-09-2026*/  
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number (0 to 1000): ");
    scanf("%d", &num);
    printf("In words: ");
      if (num == 0) {
        printf("Zero");
    }
    else if (num == 1000) {
        printf("One Thousand");
    }
    else {
        if (num >= 100) {
            int hundreds = num / 100;
            switch (hundreds) {
                case 1: printf("One Hundred "); break;
                case 2: printf("Two Hundred "); break;
                case 3: printf("Three Hundred "); break;
                case 4: printf("Four Hundred "); break;
                case 5: printf("Five Hundred "); break;
                case 6: printf("Six Hundred "); break;
                case 7: printf("Seven Hundred "); break;
                case 8: printf("Eight Hundred "); break;
                case 9: printf("Nine Hundred "); break;
            }
        }

        int last_two = num % 100;

        if (last_two >= 1 && last_two <= 19) {
            switch (last_two) {
                case 1: printf("One"); break;
                case 2: printf("Two"); break;
                case 3: printf("Three"); break;
                case 4: printf("Four"); break;
                case 5: printf("Five"); break;
                case 6: printf("Six"); break;
                case 7: printf("Seven"); break;
                case 8: printf("Eight"); break;
                case 9: printf("Nine"); break;
                case 10: printf("Ten"); break;
                case 11: printf("Eleven"); break;
                case 12: printf("Twelve"); break;
                case 13: printf("Thirteen"); break;
                case 14: printf("Fourteen"); break;
                case 15: printf("Fifteen"); break;
                case 16: printf("Sixteen"); break;
                case 17: printf("Seventeen"); break;
                case 18: printf("Eighteen"); break;
                case 19: printf("Nineteen"); break;
            }
        }
        else if (last_two >= 20 && last_two <= 99) {
            int tens = last_two / 10;
            int ones = last_two % 10;

            switch (tens) {
                case 2: printf("Twenty "); break;
                case 3: printf("Thirty "); break;
                case 4: printf("Forty "); break;
                case 5: printf("Fifty "); break;
                case 6: printf("Sixty "); break;
                case 7: printf("Seventy "); break;
                case 8: printf("Eighty "); break;
                case 9: printf("Ninety "); break;
            }

            switch (ones) {
                case 1: printf("One"); break;
                case 2: printf("Two"); break;
                case 3: printf("Three"); break;
                case 4: printf("Four"); break;
                case 5: printf("Five"); break;
                case 6: printf("Six"); break;
                case 7: printf("Seven"); break;
                case 8: printf("Eight"); break;
                case 9: printf("Nine"); break;
            }
        }
    }

    printf("\n");
    return 0;
}
