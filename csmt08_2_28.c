/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 28
Date of submission - 16-09-2026*/
#include <stdio.h>
int main() {
    char str[100];
    int i, row, col;
    
    int A[5][5] = {{0,1,1,1,0}, {1,0,0,0,1}, {1,1,1,1,1}, {1,0,0,0,1}, {1,0,0,0,1}};
    int B[5][5] = {{1,1,1,1,0}, {1,0,0,0,1}, {1,1,1,1,0}, {1,0,0,0,1}, {1,1,1,1,0}};
    int C[5][5] = {{0,1,1,1,1}, {1,0,0,0,0}, {1,0,0,0,0}, {1,0,0,0,0}, {0,1,1,1,1}};
    int D[5][5] = {{1,1,1,1,0}, {1,0,0,0,1}, {1,0,0,0,1}, {1,0,0,0,1}, {1,1,1,1,0}};
    int E[5][5] = {{1,1,1,1,1}, {1,0,0,0,0}, {1,1,1,1,0}, {1,0,0,0,0}, {1,1,1,1,1}};
    int F[5][5] = {{1,1,1,1,1}, {1,0,0,0,0}, {1,1,1,1,0}, {1,0,0,0,0}, {1,0,0,0,0}};
    int G[5][5] = {{0,1,1,1,1}, {1,0,0,0,0}, {1,0,1,1,1}, {1,0,0,0,1}, {0,1,1,1,1}};
    int H[5][5] = {{1,0,0,0,1}, {1,0,0,0,1}, {1,1,1,1,1}, {1,0,0,0,1}, {1,0,0,0,1}};
    int I[5][5] = {{1,1,1,1,1}, {0,0,1,0,0}, {0,0,1,0,0}, {0,0,1,0,0}, {1,1,1,1,1}};
    int J[5][5] = {{0,0,1,1,1}, {0,0,0,1,0}, {0,0,0,1,0}, {1,0,0,1,0}, {0,1,1,0,0}};
    int K[5][5] = {{1,0,0,0,1}, {1,0,0,1,0}, {1,1,1,0,0}, {1,0,0,1,0}, {1,0,0,0,1}};
    int L[5][5] = {{1,0,0,0,0}, {1,0,0,0,0}, {1,0,0,0,0}, {1,0,0,0,0}, {1,1,1,1,1}};
    int M[5][5] = {{1,0,0,0,1}, {1,1,0,1,1}, {1,0,1,0,1}, {1,0,0,0,1}, {1,0,0,0,1}};
    int N[5][5] = {{1,0,0,0,1}, {1,1,0,0,1}, {1,0,1,0,1}, {1,0,0,1,1}, {1,0,0,0,1}};
    int O[5][5] = {{0,1,1,1,0}, {1,0,0,0,1}, {1,0,0,0,1}, {1,0,0,0,1}, {0,1,1,1,0}};
    int P[5][5] = {{1,1,1,1,0}, {1,0,0,0,1}, {1,1,1,1,0}, {1,0,0,0,0}, {1,0,0,0,0}};
    int Q[5][5] = {{0,1,1,1,0}, {1,0,0,0,1}, {1,0,1,0,1}, {1,0,0,1,0}, {0,1,1,0,1}};
    int R[5][5] = {{1,1,1,1,0}, {1,0,0,0,1}, {1,1,1,1,0}, {1,0,0,1,0}, {1,0,0,0,1}};
    int S[5][5] = {{0,1,1,1,1}, {1,0,0,0,0}, {0,1,1,1,0}, {0,0,0,0,1}, {1,1,1,1,0}};
    int T[5][5] = {{1,1,1,1,1}, {0,0,1,0,0}, {0,0,1,0,0}, {0,0,1,0,0}, {0,0,1,0,0}};
    int U[5][5] = {{1,0,0,0,1}, {1,0,0,0,1}, {1,0,0,0,1}, {1,0,0,0,1}, {0,1,1,1,0}};
    int V[5][5] = {{1,0,0,0,1}, {1,0,0,0,1}, {0,1,0,1,0}, {0,1,0,1,0}, {0,0,1,0,0}};
    int W[5][5] = {{1,0,0,0,1}, {1,0,0,0,1}, {1,0,1,0,1}, {1,1,0,1,1}, {1,0,0,0,1}};
    int X[5][5] = {{1,0,0,0,1}, {0,1,0,1,0}, {0,0,1,0,0}, {0,1,0,1,0}, {1,0,0,0,1}};
    int Y[5][5] = {{1,0,0,0,1}, {0,1,0,1,0}, {0,0,1,0,0}, {0,0,1,0,0}, {0,0,1,0,0}};
    int Z[5][5] = {{1,1,1,1,1}, {0,0,0,1,0}, {0,0,1,0,0}, {0,1,0,0,0}, {1,1,1,1,1}};

    int temp[5][5];

    printf("Enter string: ");
    scanf("%s", str);

    printf("\n--- Output ---\n\n");

    for (row = 0; row < 5; row++) {
        i = 0;
        while (str[i] != '\0') {
            char ch = str[i];
            if (ch >= 'a' && ch <= 'z') {
                ch = ch - 32;
            }

            switch(ch) {
                case 'A': for(col=0;col<5;col++) temp[row][col] = A[row][col]; break;
                case 'B': for(col=0;col<5;col++) temp[row][col] = B[row][col]; break;
                case 'C': for(col=0;col<5;col++) temp[row][col] = C[row][col]; break;
                case 'D': for(col=0;col<5;col++) temp[row][col] = D[row][col]; break;
                case 'E': for(col=0;col<5;col++) temp[row][col] = E[row][col]; break;
                case 'F': for(col=0;col<5;col++) temp[row][col] = F[row][col]; break;
                case 'G': for(col=0;col<5;col++) temp[row][col] = G[row][col]; break;
                case 'H': for(col=0;col<5;col++) temp[row][col] = H[row][col]; break;
                case 'I': for(col=0;col<5;col++) temp[row][col] = I[row][col]; break;
                case 'J': for(col=0;col<5;col++) temp[row][col] = J[row][col]; break;
                case 'K': for(col=0;col<5;col++) temp[row][col] = K[row][col]; break;
                case 'L': for(col=0;col<5;col++) temp[row][col] = L[row][col]; break;
                case 'M': for(col=0;col<5;col++) temp[row][col] = M[row][col]; break;
                case 'N': for(col=0;col<5;col++) temp[row][col] = N[row][col]; break;
                case 'O': for(col=0;col<5;col++) temp[row][col] = O[row][col]; break;
                case 'P': for(col=0;col<5;col++) temp[row][col] = P[row][col]; break;
                case 'Q': for(col=0;col<5;col++) temp[row][col] = Q[row][col]; break;
                case 'R': for(col=0;col<5;col++) temp[row][col] = R[row][col]; break;
                case 'S': for(col=0;col<5;col++) temp[row][col] = S[row][col]; break;
                case 'T': for(col=0;col<5;col++) temp[row][col] = T[row][col]; break;
                case 'U': for(col=0;col<5;col++) temp[row][col] = U[row][col]; break;
                case 'V': for(col=0;col<5;col++) temp[row][col] = V[row][col]; break;
                case 'W': for(col=0;col<5;col++) temp[row][col] = W[row][col]; break;
                case 'X': for(col=0;col<5;col++) temp[row][col] = X[row][col]; break;
                case 'Y': for(col=0;col<5;col++) temp[row][col] = Y[row][col]; break;
                case 'Z': for(col=0;col<5;col++) temp[row][col] = Z[row][col]; break;
                default: i++; continue;
            }

            for (col = 0; col < 5; col++) {
                if (temp[row][col] == 1) printf("*");
                else printf(" ");
            }
            printf("  "); 
            i++;
        }
        printf("\n");
    }

    return 0;
}
