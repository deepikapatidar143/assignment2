/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 13
Date of submission - 16-09-2026*/
#include <stdio.h>
int main() {
    int n;
    double sum = 0.0;
    double pi;

    printf("Enter value of n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum += 1.0 / (2 * i + 1);
        } else {
            sum -= 1.0 / (2 * i + 1);
        }
    }

    pi = 4.0 * sum;

    printf("value of pie : %.6f\n",pi);

    return 0;
}
