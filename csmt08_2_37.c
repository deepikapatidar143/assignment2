/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 37
Date of submission - 16-09-2026*/
#include <stdio.h>

char *w[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
             "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
             "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

void p(int n, char *s) {
    if (!n) return;
    if (n / 100) printf("%s hundred ", w[n / 100]);
    int rem = n % 100;
    if (rem) {
        if (rem < 20) printf("%s ", w[rem]);
        else printf("%s %s ", w[20 + rem / 10], w[rem % 10]);
    }
    printf("%s ", s);
}

int main(int c, char **v) {
    if (c < 2) return printf("Usage: %s <integer>\n", v[0]), 1;

    long long n = 0;
    int is_neg = 0;
    char *str = v[1];

    if (*str == '-') {
        is_neg = 1;
        str++;
    }

    while (*str >= '0' && *str <= '9') {
        n = n * 10 + (*str - '0');
        str++;
    }

    if (n == 0) return printf("zero\n"), 0;
    if (is_neg) printf("negative ");
    
    p(n / 1000000, "million");
    p((n % 1000000) / 1000, "thousand");
    p(n % 1000, "");
    
    printf("\n");
    return 0;
}
