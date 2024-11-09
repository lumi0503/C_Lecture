#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define WORDS 5

int main() {
	int i;
	char dic[WORDS][2][30] = {
		{"book","책" },
		{"boy","소년"},
		{"rain","비" },
		{"computer","컴퓨터"},
		{"language","언어" }
	};
	char word[30];
	gets_s(word, 30);
	for (i = 0;i < WORDS;i++) {
		if (strcmp(dic[i][0], word) == 0) {
			printf("%s : %s\n", word, dic[i][1]);
			return 0;
		}
	}
	printf("사전에서 발견되지 않았습니다.");
	return 0;
}
