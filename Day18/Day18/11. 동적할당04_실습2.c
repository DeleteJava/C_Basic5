#include <stdio.h>
#include <malloc.h>

int main(void) {
	double* pfnum1 = (double*)malloc(sizeof(double));
	double* pfnum2 = (double*)malloc(sizeof(double));
	if (pfnum1 != NULL && pfnum2 != NULL) {
		printf("실수값 2개 입력 >> ");
		scanf_s("%lf%lf", pfnum1, pfnum2);
		printf("저장된 값 : %.1f, %.1f\n", *pfnum1, *pfnum2);
		printf("저장된 값들의 합 : %.2f\n", *pfnum1 + *pfnum2);
	}
	else {
		printf("공간 확보에 실패했습니다.\n");
	}
	if (pfnum1 != NULL) free(pfnum1);
	if (pfnum2 != NULL) free(pfnum2);
	return 0;
}