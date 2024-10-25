#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROWS 3
#define COLS 3

int main() {
    srand(time(NULL));
    int A[ROWS][COLS];
    int B[ROWS][COLS];
    int C[ROWS][COLS];
    int D[ROWS][COLS];
    int tmp = 0;
    int i, j, k;
    
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
            printf("%d ", A[i][j]);
            C[i][j] = A[i][j] + B[i][j];
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<ROWS;i++){       // B행렬 출력
        for(j=0;j<COLS;j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<ROWS;i++){       // A+B행렬인 C출력
        for(j=0;j<COLS;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<ROWS;i++){
        for(j=0;j<COLS;j++){
            D[i][j] = 0;
            for(k=0;k<ROWS;k++)
                D[i][j] += A[i][k] * B[k][j];       
        }
    }
    printf("\n");
    for(i=0;i<ROWS;i++){
        for(j=0;j<COLS;j++){
            printf("%d ", D[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}