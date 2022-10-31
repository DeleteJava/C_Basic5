#include <stdio.h>
#include <malloc.h>

int main(void) {
	int size;
	double* parr;
	double fnum = 1.1;
	printf("배열의 크기 >> ");
	scanf_s("%d", &size);
	if (size > 0) {
		parr = (double*)malloc(sizeof(double) * size);
		if (parr != NULL) {
			for (int i = 0; i < size; i += 1) {
				parr[i] = 1.1 + 0.7 * i;
			}
			printf("저장된 값\n");
			for (int i = 0; i < size; i += 1) {
				printf("%.1f ", parr[i]);
			} printf("\n");
		}
		else {
			printf("동적할당실패\n");
		}
		if (parr != NULL) {
			free(parr);
			parr = NULL;
		}
	}
	else printf("잘못된 수량입니다.\n");
	return 0;
}