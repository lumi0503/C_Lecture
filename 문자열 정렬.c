#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 6

int main() {
	int i, j;
	char fruits[SIZE][10] = {
		"tomato",
		"apple",
		"pineapple",
		"avocado",
		"pear",
		"banana"
	};
	for (i = 0;i < SIZE;i++) {
		for (j = 0;j < SIZE - 1;j++) {
			if (strcmp(fruits[j], fruits[j + 1]) > 0) {
				char tmp[10] = "";
				strcpy(tmp, fruits[j]);
				strcpy(fruits[j], fruits[j + 1]);
				strcpy(fruits[j + 1], tmp);
			}
		}
	}
	for (i = 0;i < SIZE;i++){
		printf("%s\n", fruits[i]);
	}
	return 0;
}
