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
		printf("�����Ҵ����\n");
	}
	else {
		printf("�Ǽ��� 3�� �Է� >> ");
		scanf_s("%lf", &pNode->data1);
		scanf_s("%lf", &pNode->data2);
		scanf_s("%lf", &pNode->data3);
		double result = pNode->data1 + pNode->data2 + pNode->data3;
		printf("����� �� : %.1f %.1f %.1f\n",
			pNode->data1, pNode->data2, pNode->data3);
		printf("����� ������ �� : %.2f\n", result);
		printf("����� ������ ��� : %.2f\n", result / 3);
	}
	if (pNode != NULL) {
		free(pNode);
		pNode = NULL;
	}
	return 0;
}