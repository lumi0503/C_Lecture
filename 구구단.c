#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j, n;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            printf("%d X %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
}