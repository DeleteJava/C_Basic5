#include <stdio.h>
#include <malloc.h>

int main(void) {
	// char, int, double - 1, 4, 8 ����Ʈ
	int size = 5;
	// ũ�⸦ �Է¹��� ���, ������ �䱸�ؾ� �Ѵ�. Byte �䱸�غ���, ���� ����....
	int* parr = (int*)malloc(sizeof(int) * size);
	int result = 0; // ���Ϻ����� �ظ��ؼ� ������ �ʽ��ϴ�.
	if (parr != NULL) {
		printf("������ %d�� �Է� >> ", size); 
		for (int i = 0; i <= size - 1; i += 1) {
			scanf_s("%d", &parr[i]); // scanf_s("%d", parr + i);
		}
		// ����) ��� ���� ��������, 0�̻� 5�̸��� 0�̻� 4���ϴ� �ٸ��ϴ�. (ex - 4.5)
		//      ������ ��������������� 0�̻� 5�̸��� 0�̻� 4���ϴ� �����ϴ�. (4.5�� ������ �ƴմϴ�.)
		for (int i = 0; i < size; i += 1) {
			result += parr[i];
		}
		printf("����� �� : ");
		for (int i = 0; i < size; i += 1) {
			printf("%d ", parr[i]);
		}
		printf("\n������ �� : %d\n", result);
	}
	else {
		printf("������ ������ ������ Ȯ������ �ʾҽ��ϴ�.\n");
	}
	if (parr != NULL) {
		free(parr);
		parr = NULL;
	}
	return 0;
}