#include <stdio.h>
#include <malloc.h>

int main(void) {
	// �����͸� ����Ѵ� -> �����̵簣�� �ּҰ��� ���Ͻ�Ų��.
	// - �Ŵ��� ���� ������ �ٷ�� ���ؼ�.
	// 32��Ʈ ���� 4����Ʈ / 64��Ʈ 8����Ʈ - �����ͺ����� ũ��
	// �迭 �Ǵ� ���Ϻ����ε� �Ŵ��� ��

	// �迭�ٷ�� - ������� �Ȱ���. ũ�� ��Ұ� ÷���ȴ�.
	int size = 10;

	/* �Է��� ũ��� ���� ����
	printf("� �ʿ��Ѱ���? ");
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
		printf("�����Ҵ����\n");
	}
	if (parr != NULL) {
		free(parr);
		parr = NULL;
	}
	return 0;
}