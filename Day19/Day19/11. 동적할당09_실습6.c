#include <stdio.h>
#include <malloc.h>

int main(void) {
	int size = 0;
	int* parr;
	int result = 0;
	printf("�迭�� ũ�� �Է� >> ");
	scanf_s("%d", &size);
	if (size < 0) {
		printf("�迭 ���� �Ұ��Դϴ�.\n");
	}
	else if (size == 0) {
		printf("�迭�� �������� �ʽ��ϴ�.\n");
	}
	else {
		parr = (int*)malloc(sizeof(int) * size);
		if (parr != NULL) {
			printf("%d���� �� �Է� >> ", size);
			for (int i = 0; i < size; i += 1) {
				scanf_s("%d", parr +i);
			}
			for (int i = 0; i < size; i += 1) {
				result += parr[i];
			}
			printf("�Էµ� ������ ��� : %.2f\n", result / (double)size);
		}
		else {
			printf("�����Ҵ�����߽��ϴ�.\n");
		}
		if (parr != NULL) {
			free(parr);
			parr = NULL;
		}
	}
	return 0;
}