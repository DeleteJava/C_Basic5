#include <stdio.h>
#include <malloc.h>

int main(void) {
	int size = 0;
	int* parr;
	int result = 0;
	printf("배열의 크기 입력 >> ");
	scanf_s("%d", &size);
	if (size < 0) {
		printf("배열 생성 불가입니다.\n");
	}
	else if (size == 0) {
		printf("배열을 생성하지 않습니다.\n");
	}
	else {
		parr = (int*)malloc(sizeof(int) * size);
		if (parr != NULL) {
			printf("%d개의 값 입력 >> ", size);
			for (int i = 0; i < size; i += 1) {
				scanf_s("%d", parr +i);
			}
			for (int i = 0; i < size; i += 1) {
				result += parr[i];
			}
			printf("입력된 값들의 평균 : %.2f\n", result / (double)size);
		}
		else {
			printf("동적할당실패했습니다.\n");
		}
		if (parr != NULL) {
			free(parr);
			parr = NULL;
		}
	}
	return 0;
}