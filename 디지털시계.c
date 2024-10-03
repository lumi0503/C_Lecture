#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define num 6
int main() {
    int hour, min, sec;
    while(1){
        system("clear");     //clear in Linux, cls in Window
        printf("%02d : %02d : %02d", hour, min, sec);
        sec++;
        if(sec==60) {min++;sec=0;}
        if(min==60) {hour++;min=0;}
        if(hour==24) {hour=min=sec=0;}
        sleep(1000);         //sleep in Linux,  Sleep in Window
    }
    return 0;
}