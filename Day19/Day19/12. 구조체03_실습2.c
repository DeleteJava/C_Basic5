#include <stdio.h>

struct node {
	int num1; int num2;
};
// typedef A B;
// - �ڵ�ν�, A�� B��� ��Ī�� �ο��Ѵ�.
typedef struct node Node;
// - ġȯ���� ���� �� ��. �ݵ�� typedef�� �̿��� ��

int main(void) {
	Node data1;
	printf("���� 2�� �Է� >> ");
	scanf_s("%d%d", &data1.num1, &data1.num2);
	printf("�� ������ �� : %d\n", data1.num1 + data1.num2);
	printf("�� ������ �� : %d\n", data1.num1 * data1.num2);
	return 0;
}