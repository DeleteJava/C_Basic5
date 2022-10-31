#include <stdio.h>

struct node {
	int data1;
	int data2;
};
typedef struct node Node;
// ����ü�� ����� �⺻������ �Լ��� �̿��Ѵ�.
// - ���� �ڷ��������� ���� ���簡 �����ϴ�.
Node input_data(char* msg) {
	Node set = { 0 };
	printf(msg);
	scanf_s("%d%d", &set.data1, &set.data2);
	return set;
}
void show_data(Node set) {
	printf("%d %d\n", set.data1, set.data2);
}

int main(void) {
	Node set1 = { 10,20 };
	Node set2;
	set2.data1 = 15; set2.data2 = 30;
	show_data(set1);
	show_data(set2);
	// ����ü�� �ٷ� ���...
	// 1. ���� ������ �ٷ�� �Լ��� ���� �����.
	// 2. �ڷᱸ���� �ٷ�� �Լ��� ���� �����.
	Node arr[3];
	int size = sizeof(arr) / sizeof(Node);
	for (int i = 0; i < size; i += 1) {
		arr[i] = input_data("�� �Է� >> ");
	}
	for (int i = 0; i < size; i += 1) {
		show_data(arr[i]);
	}
	return 0;
}