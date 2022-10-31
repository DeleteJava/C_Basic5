#include <stdio.h>
#include <malloc.h>

struct node {
	double data1;
	double data2;
	double data3;
};
typedef struct node dataSet;

int main(void) {
	dataSet* pNode = (dataSet*)malloc(sizeof(dataSet));
	double result;
	if (pNode == NULL) {
		printf("동적할당실패\n");
	}
	else {
		printf("실수값 3개 입력 >> ");
		scanf_s("%lf", &pNode->data1);
		scanf_s("%lf", &pNode->data2);
		scanf_s("%lf", &pNode->data3);
		double result = pNode->data1 + pNode->data2 + pNode->data3;
		printf("저장된 값 : %.1f %.1f %.1f\n",
			pNode->data1, pNode->data2, pNode->data3);
		printf("저장된 값들의 합 : %.2f\n", result);
		printf("저장된 값들의 평균 : %.2f\n", result / 3);
	}
	if (pNode != NULL) {
		free(pNode);
		pNode = NULL;
	}
	return 0;
}