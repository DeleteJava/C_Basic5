#include <stdio.h>
#include <malloc.h>

int main(void) {

	// int num1;
	int* pnum1 = (int*)malloc(sizeof(int));
	// int num2;
	int* pnum2 = (int*)malloc(sizeof(int));

	// �ʿ��� ������ �ִٸ�, ��� �־�� �۵��Ѵ�.
	if (pnum1 != NULL && pnum2 != NULL) {
		// num1 = 10;
		*pnum1 = 10;
		// num2 = 20;
		*pnum2 = 20;
		// printf("������ ����� �� : %d, %d\n", num1, num2);
		printf("������ ����� �� : %d, %d\n", *pnum1, *pnum2);
		// NULL ������ ������ : ������ ������ �ȵ� �� ����
	}
	else {
		printf("���α׷� �ε� ����...\n");
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