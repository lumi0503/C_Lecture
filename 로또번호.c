#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 45

int main(){
    
    int i,k,isin;
    int lotto[6] = {0,};
    srand(time(0));
    
    for(i=0;i<6;i++){
        do{
            isin = 0;
            k = 1+rand()%MAX;
            for(int j=0;j<i;j++){
                if(lotto[j]==k){
                    isin = 1;
                    break;
                }
            }
        }while(isin == 1);
        lotto[i] = k;
        printf("%d ", lotto[i]);
    }
    
    return 0;
}