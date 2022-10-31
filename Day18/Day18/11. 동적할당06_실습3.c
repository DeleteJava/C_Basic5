#include <stdio.h>
#include <malloc.h>

int main(void) {
	// 이러면 안됩니다.
	// char* pword = (char*)malloc(sizeof(char) * 15);
	int size = 15;
	char* pword = (char*)malloc(sizeof(char) * size);
	if (pword == NULL) {
		printf("RAM이 모자릅니다. 더 늘리세요...\n");
	}
	else {
		printf("최대 %d글자의 단어 입력 >> ", size - 1);
		scanf_s("%s", pword, size);
		printf("입력된 단어 : %s\n", pword);
	}
	if (pword != NULL) {
		free(pword);
		pword = NULL;
	}
	return 0;
}