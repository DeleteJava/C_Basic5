#include <stdio.h>
#include <malloc.h>

int main(void) {
	// 포인터를 사용한다 -> 무엇이든간에 주소값을 통일시킨다.
	// - 거대한 것을 가볍게 다루기 위해서.
	// 32비트 기준 4바이트 / 64비트 8바이트 - 포인터변수의 크기
	// 배열 또는 단일변수인데 거대한 것

	// 배열다루기 - 사용방법은 똑같다. 크기 요소가 첨가된다.
	int size = 10;

	/* 입력한 크기로 생성 가능
	printf("몇개 필요한가요? ");
	scanf_s("%d", &size);*/
	int* parr = (int*)malloc(sizeof(int) * size);
	if (parr != NULL) {
		for (int i = 0; i <= size - 1; i += 1) {
			parr[i] = i + 5;
		}
		for (int i = 0; i <= size - 1; i += 1) {
			printf("%d ", parr[i]);
		}
	}
	else {
		printf("동적할당실패\n");
	}
	if (parr != NULL) {
		free(parr);
		parr = NULL;
	}
	return 0;
}