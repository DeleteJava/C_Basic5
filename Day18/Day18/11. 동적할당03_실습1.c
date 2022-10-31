#include <stdio.h>
#include <malloc.h>

int main(void) {

	// int num1;
	int* pnum1 = (int*)malloc(sizeof(int));
	// int num2;
	int* pnum2 = (int*)malloc(sizeof(int));

	// 필요한 변수가 있다면, 모두 있어야 작동한다.
	if (pnum1 != NULL && pnum2 != NULL) {
		// num1 = 10;
		*pnum1 = 10;
		// num2 = 20;
		*pnum2 = 20;
		// printf("변수에 저장된 값 : %d, %d\n", num1, num2);
		printf("변수에 저장된 값 : %d, %d\n", *pnum1, *pnum2);
		// NULL 포인터 역참조 : 공간의 생성이 안될 수 있음
	}
	else {
		printf("프로그램 로딩 실패...\n");
	}
	if (pnum1 != NULL) {
		free(pnum1);
		pnum1 = NULL;
	}
	if (pnum2 != NULL) {
		free(pnum2);
		pnum2 = NULL;
	}
	return 0;
}