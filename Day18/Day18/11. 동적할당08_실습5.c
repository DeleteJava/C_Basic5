#include <stdio.h>
#include <malloc.h>

int main(void) {
	int size;
	double* parr;
	double fnum = 1.1;
	printf("�迭�� ũ�� >> ");
	scanf_s("%d", &size);
	if (size > 0) {
		parr = (double*)malloc(sizeof(double) * size);
		if (parr != NULL) {
			for (int i = 0; i < size; i += 1) {
				parr[i] = 1.1 + 0.7 * i;
			}
			printf("����� ��\n");
			for (int i = 0; i < size; i += 1) {
				printf("%.1f ", parr[i]);
			} printf("\n");
		}
		else {
			printf("�����Ҵ����\n");
		}
		if (parr != NULL) {
			free(parr);
			parr = NULL;
		}
	}
	else printf("�߸��� �����Դϴ�.\n");
	return 0;
}