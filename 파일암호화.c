#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
FILE* fp1;
FILE* fp2;
fp1 = fopen("alalal.txt.", "w");

char c;
for (c = 'a'; c <= 'z'; c++) {
fputc(c, fp1);
}

for (int i = 0; i <= 9; i++) {
fputc(i, fp1);
}
fclose(fp1);

fp1 = fopen("alalal.txt.", "r");
fp2 = fopen("enc.bin", "wb");


int key;
printf("암호화 키 입력");
scanf("%d", &key);

int end = fgetc(fp1);
while (end != EOF) {
char enc = end ^ key;
fwrite(&enc, 1, 1, fp2);
}

fclose(fp1);
fclose(fp2);

return 0;
}
